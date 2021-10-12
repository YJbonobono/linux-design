#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x7ee11208, "regulator_list_voltage_table" },
	{ 0xf943e9be, "mc13xxx_reg_rmw" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5b9c0cfa, "rdev_get_dev" },
	{ 0xd53fcec0, "mc13xxx_reg_read" },
};

MODULE_INFO(depends, "mc13xxx-core");


MODULE_INFO(srcversion, "B4451EF37A10F1EF7804A98");
