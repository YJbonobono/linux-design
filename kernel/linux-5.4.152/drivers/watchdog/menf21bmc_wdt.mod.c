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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x54750daf, "devm_watchdog_register_device" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xbef44855, "watchdog_init_timeout" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35A2D4B5FB814A9A4D76C74");
