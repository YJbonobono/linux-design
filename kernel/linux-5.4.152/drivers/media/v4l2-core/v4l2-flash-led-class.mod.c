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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x843d567, "led_sysfs_disable" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x3dbc5be0, "led_set_flash_brightness" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x416072a3, "led_get_flash_fault" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9b5e183d, "led_set_brightness_sync" },
	{ 0x490df297, "fwnode_handle_get" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6f70e4ae, "v4l2_fh_is_singular" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc85daefe, "led_set_flash_timeout" },
	{ 0x16dc00df, "led_update_brightness" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x4be7b04c, "led_update_flash_brightness" },
	{ 0xd0f22cfd, "v4l2_subdev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3be0efc, "led_trigger_remove" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x60eb7d79, "led_sysfs_enable" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "videodev,led-class-flash,mc");


MODULE_INFO(srcversion, "0E980667C5B982B8CA84347");
