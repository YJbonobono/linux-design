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
	{ 0x6f45a7e6, "v4l2_event_subdev_unsubscribe" },
	{ 0xdfabd004, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xab0573e7, "v4l2_subdev_link_validate" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x99b01350, "__v4l2_ctrl_grab" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x1dba09e3, "v4l2_async_register_subdev_sensor_common" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x5b31268, "v4l2_ctrl_new_int_menu" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x93a03842, "v4l2_fwnode_endpoint_free" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0xb7df6419, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x8ccccb74, "fwnode_graph_get_next_endpoint" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x65f407cb, "pm_runtime_get_if_in_use" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0xfdad8045, "__v4l2_ctrl_modify_range" },
	{ 0x21ab17b5, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc2da5f50, "__v4l2_ctrl_handler_setup" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc");

MODULE_ALIAS("acpi*:SONY355A:*");

MODULE_INFO(srcversion, "562C6F50E42294157D2A0DB");
