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
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xb4facf8b, "simple_open" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x1d7439f1, "si476x_core_cmd_agc_status" },
	{ 0x7d5ffd97, "si476x_core_cmd_fm_acf_status" },
	{ 0x12073166, "si476x_core_cmd_fm_phase_div_status" },
	{ 0xe7a6755c, "si476x_core_cmd_fm_rds_blockcount" },
	{ 0x6198aac1, "si476x_core_cmd_fm_rsq_status" },
	{ 0xc59fe0e6, "si476x_core_cmd_fm_seek_start" },
	{ 0x4c0b2e8b, "si476x_core_cmd_fm_tune_freq" },
	{ 0x453a9dc3, "si476x_core_cmd_am_acf_status" },
	{ 0xfca1adb9, "si476x_core_cmd_am_rsq_status" },
	{ 0x9525f183, "si476x_core_cmd_am_seek_start" },
	{ 0xdc4dca59, "si476x_core_cmd_am_tune_freq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x79f8091, "si476x_core_start" },
	{ 0xdb266a1c, "si476x_core_stop" },
	{ 0x3b09e208, "si476x_core_cmd_fm_phase_diversity" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcb33e804, "regcache_sync_region" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x165d087d, "v4l2_device_set_name" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0xc77f781d, "si476x_core_is_a_primary_tuner" },
	{ 0xa5c904c0, "si476x_core_has_am" },
	{ 0x3cf1e6a5, "si476x_core_is_a_secondary_tuner" },
	{ 0x4483908c, "si476x_core_has_diversity" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x507b42ea, "si476x_core_cmd_fm_rds_status" },
	{ 0xde026170, "si476x_core_is_in_am_receiver_mode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
	{ 0x3a1084c2, "si476x_core_set_power_state" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0x6f70e4ae, "v4l2_fh_is_singular" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb53c1438, "video_devdata" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,si476x-core");


MODULE_INFO(srcversion, "5640999F8DB1B7D164E8CB2");
