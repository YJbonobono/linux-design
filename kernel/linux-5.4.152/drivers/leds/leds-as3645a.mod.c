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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xe13b7148, "led_classdev_flash_register_ext" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x490df297, "fwnode_handle_get" },
	{ 0x27b69f7b, "fwnode_get_next_child_node" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f4eee69, "v4l2_flash_indicator_init" },
	{ 0x4476dac7, "v4l2_flash_init" },
	{ 0x754d539c, "strlen" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x62eeffa7, "led_classdev_flash_unregister" },
	{ 0x15b5e5ab, "v4l2_flash_release" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "led-class-flash,v4l2-flash-led-class");

MODULE_ALIAS("of:N*T*Cams,as3645a");
MODULE_ALIAS("of:N*T*Cams,as3645aC*");
MODULE_ALIAS("i2c:as3645a");

MODULE_INFO(srcversion, "633AEAA0F9CB61657F5B537");
