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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6f45a7e6, "v4l2_event_subdev_unsubscribe" },
	{ 0xab0573e7, "v4l2_subdev_link_validate" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0x27d4fd24, "v4l2_subdev_notify_event" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7efc7807, "devm_i2c_new_dummy_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xef15cc44, "v4l2_hdmi_rx_colorimetry" },
	{ 0xdfabd004, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x5cc76824, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x69acdf38, "memcpy" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcc3a8ee0, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings,snd-soc-core,mc,snd-pcm");

MODULE_ALIAS("of:N*T*Cnxp,tda19971");
MODULE_ALIAS("of:N*T*Cnxp,tda19971C*");
MODULE_ALIAS("of:N*T*Cnxp,tda19973");
MODULE_ALIAS("of:N*T*Cnxp,tda19973C*");
MODULE_ALIAS("i2c:tda19971");
MODULE_ALIAS("i2c:tda19973");

MODULE_INFO(srcversion, "62B58CB50A021C868B3A102");
