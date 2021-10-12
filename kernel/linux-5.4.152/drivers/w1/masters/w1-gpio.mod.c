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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2cdb3bda, "w1_add_master_device" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x688b1b9e, "devm_gpiod_get_index_optional" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0xcbb347e9, "w1_remove_master_device" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "D68AAEA6B1450D31FBF8E9E");
