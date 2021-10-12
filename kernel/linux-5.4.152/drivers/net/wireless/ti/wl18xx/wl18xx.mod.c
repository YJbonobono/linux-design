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
	{ 0x9fb86c88, "wl12xx_cmd_build_probe_req" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xce9f9d1e, "wlcore_set_key" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x1e2ae7d6, "wlcore_event_beacon_loss" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc22b09e9, "wlcore_event_dummy_packet" },
	{ 0x7fc1cccd, "wlcore_event_inactive_sta" },
	{ 0xbb9bff09, "wlcore_event_ba_rx_constraint" },
	{ 0x70a771be, "ieee80211_radar_detected" },
	{ 0xfa7023e2, "wlcore_event_fw_logger" },
	{ 0xc09258c5, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x2e520ae0, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x88f17251, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xfb7c9f39, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xcd7d543f, "wl1271_cmd_configure" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc34b242b, "default_llseek" },
	{ 0xb84a5bc6, "wlcore_event_sched_scan_completed" },
	{ 0x744ca783, "wlcore_boot_upload_firmware" },
	{ 0xc5850110, "printk" },
	{ 0xc6c4ed08, "wlcore_set_partition" },
	{ 0x9166fada, "strncpy" },
	{ 0xd931a63f, "wlcore_enable_interrupts" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0x676f7836, "__cfg80211_send_event_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xbd44e9b, "wlcore_event_channel_switch" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x82fa98c7, "__cfg80211_alloc_event_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51b74f39, "wlcore_disable_interrupts" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbbe48366, "wlcore_remove" },
	{ 0xa518601e, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x7a5ff481, "wlcore_event_max_tx_failure" },
	{ 0xd8ce33be, "wl1271_free_tx_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa8aba16a, "ieee80211_stop_rx_ba_session" },
	{ 0xee3ab00b, "wlcore_scan_sched_scan_results" },
	{ 0x6d0f4e5e, "ieee80211_get_hdrlen_from_skb" },
	{ 0xbaf49082, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eb7e7a7, "wl1271_debugfs_update_stats" },
	{ 0x6da5a42c, "wlcore_set_scan_chan_params" },
	{ 0x9601035f, "request_firmware" },
	{ 0xf311e611, "wlcore_boot_run_firmware" },
	{ 0xf30a8956, "wlcore_translate_addr" },
	{ 0xbe08d9d3, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75c2d6a4, "wlcore_event_roc_complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4ac5025b, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xb98c2b92, "wl1271_cmd_send" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x3673df37, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore,mac80211,cfg80211");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "7B5CD649474EDF68FBB6590");
