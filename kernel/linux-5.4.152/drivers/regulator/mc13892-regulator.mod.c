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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x919d7acb, "mc13xxx_fixed_regulator_set_voltage" },
	{ 0x9fcad55d, "regulator_map_voltage_ascend" },
	{ 0x7ee11208, "regulator_list_voltage_table" },
	{ 0x92f397f6, "mc13xxx_regulator_ops" },
	{ 0x86bd9232, "mc13xxx_fixed_regulator_ops" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8aa59303, "mc13xxx_reg_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5b9c0cfa, "rdev_get_dev" },
	{ 0xf943e9be, "mc13xxx_reg_rmw" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8298a67, "mc13xxx_unlock" },
	{ 0xd53fcec0, "mc13xxx_reg_read" },
	{ 0x53a1b95c, "mc13xxx_lock" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-regulator-core,mc13xxx-core");


MODULE_INFO(srcversion, "008C8EC7B2242D1B3C5FB07");
