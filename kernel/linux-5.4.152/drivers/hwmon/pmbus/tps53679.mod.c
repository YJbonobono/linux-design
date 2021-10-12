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
	{ 0x95178ca5, "pmbus_do_remove" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xd0d6b5aa, "pmbus_read_byte_data" },
	{ 0x36024a74, "pmbus_do_probe" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cti,tps53679");
MODULE_ALIAS("of:N*T*Cti,tps53679C*");
MODULE_ALIAS("i2c:tps53679");

MODULE_INFO(srcversion, "780244479F70BD8569D1C06");
