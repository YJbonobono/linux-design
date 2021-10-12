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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xd7219bcb, "cec_received_msg_ts" },
	{ 0xf302fc0b, "cec_transmit_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0xb2367d62, "cec_allocate_adapter" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2da35042, "i2c_new_dummy_device" },
	{ 0xe77eddda, "i2c_new_ancillary_device" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x688b1b9e, "devm_gpiod_get_index_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf56238f4, "v4l2_find_dv_timings_cea861_vic" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3656342, "cec_s_phys_addr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2bf67def, "v4l2_calc_aspect_ratio" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0x8f8d4341, "v4l2_get_edid_phys_addr" },
	{ 0x27d4fd24, "v4l2_subdev_notify_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xcc3a8ee0, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0xdfabd004, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x5cc76824, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x1612c0b, "v4l2_detect_gtf" },
	{ 0xa97e00eb, "v4l2_detect_cvt" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0xb4a076, "cec_delete_adapter" },
	{ 0x5fd07883, "cec_register_adapter" },
	{ 0x7ed6f40b, "cec_unregister_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Cadi,adv7611");
MODULE_ALIAS("of:N*T*Cadi,adv7611C*");
MODULE_ALIAS("of:N*T*Cadi,adv7612");
MODULE_ALIAS("of:N*T*Cadi,adv7612C*");
MODULE_ALIAS("i2c:adv7604");
MODULE_ALIAS("i2c:adv7611");
MODULE_ALIAS("i2c:adv7612");

MODULE_INFO(srcversion, "C041A2BB4A09F06E04A263C");
