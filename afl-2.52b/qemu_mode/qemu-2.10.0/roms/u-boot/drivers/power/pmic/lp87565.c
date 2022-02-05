/*
 * (C) Copyright 2017 Texas Instruments Incorporated, <www.ti.com>
 * Keerthy <j-keerthy@ti.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <fdtdec.h>
#include <errno.h>
#include <dm.h>
#include <i2c.h>
#include <power/pmic.h>
#include <power/regulator.h>
#include <power/lp87565.h>
#include <dm/device.h>

DECLARE_GLOBAL_DATA_PTR;

static const struct pmic_child_info pmic_children_info[] = {
	{ .prefix = "buck", .driver = LP87565_BUCK_DRIVER },
	{ },
};

static int lp87565_write(struct udevice *dev, uint reg, const uint8_t *buff,
			  int len)
{
	int ret;

	ret = dm_i2c_write(dev, reg, buff, len);
	if (ret)
		error("write error to device: %p register: %#x!", dev, reg);

	return ret;
}

static int lp87565_read(struct udevice *dev, uint reg, uint8_t *buff, int len)
{
	int ret;

	ret = dm_i2c_read(dev, reg, buff, len);
	if (ret)
		error("read error from device: %p register: %#x!", dev, reg);

	return ret;
}

static int lp87565_bind(struct udevice *dev)
{
	ofnode regulators_node;
	int children;

	regulators_node = dev_read_subnode(dev, "regulators");
	if (!ofnode_valid(regulators_node)) {
		debug("%s: %s regulators subnode not found!", __func__,
		      dev->name);
		return -ENXIO;
	}

	debug("%s: '%s' - found regulators subnode\n", __func__, dev->name);

	children = pmic_bind_children(dev, regulators_node, pmic_children_info);
	if (!children)
		printf("%s: %s - no child found\n", __func__, dev->name);

	/* Always return success for this device */
	return 0;
}

static struct dm_pmic_ops lp87565_ops = {
	.read = lp87565_read,
	.write = lp87565_write,
};

static const struct udevice_id lp87565_ids[] = {
	{ .compatible = "ti,lp87565", .data = LP87565 },
	{ .compatible = "ti,lp87565-q1", .data = LP87565_Q1 },
	{ }
};

U_BOOT_DRIVER(pmic_lp87565) = {
	.name = "lp87565_pmic",
	.id = UCLASS_PMIC,
	.of_match = lp87565_ids,
	.bind = lp87565_bind,
	.ops = &lp87565_ops,
};
