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
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0x7ee11208, "regulator_list_voltage_table" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:max1586");
MODULE_ALIAS("of:N*T*Cmaxim,max1586");
MODULE_ALIAS("of:N*T*Cmaxim,max1586C*");

MODULE_INFO(srcversion, "C51FFF8EC0ABBAD5E6A9347");
