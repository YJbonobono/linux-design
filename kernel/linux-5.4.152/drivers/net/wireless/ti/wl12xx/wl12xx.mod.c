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
	{ 0x5ed55d4, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xce9f9d1e, "wlcore_set_key" },
	{ 0x2184d259, "wl1271_acx_init_mem_config" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x1e2ae7d6, "wlcore_event_beacon_loss" },
	{ 0xc22b09e9, "wlcore_event_dummy_packet" },
	{ 0x7fc1cccd, "wlcore_event_inactive_sta" },
	{ 0xbb9bff09, "wlcore_event_ba_rx_constraint" },
	{ 0x9862b00e, "wl1271_acx_pm_config" },
	{ 0xb23b30e2, "wlcore_calc_packet_alignment" },
	{ 0xc09258c5, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2e520ae0, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x88f17251, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb7c9f39, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x770871a3, "wl1271_acx_set_ht_capabilities" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd7d543f, "wl1271_cmd_configure" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xb03bd18f, "wl1271_cmd_data_path" },
	{ 0xdd4f0a78, "wl12xx_acx_mem_cfg" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb84a5bc6, "wlcore_event_sched_scan_completed" },
	{ 0x744ca783, "wlcore_boot_upload_firmware" },
	{ 0xc00bd4e5, "wl1271_acx_sleep_auth" },
	{ 0xc5850110, "printk" },
	{ 0xc6c4ed08, "wlcore_set_partition" },
	{ 0xd931a63f, "wlcore_enable_interrupts" },
	{ 0xdb9dca45, "wl1271_cmd_test" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbd44e9b, "wlcore_event_channel_switch" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51b74f39, "wlcore_disable_interrupts" },
	{ 0xbbe48366, "wlcore_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7a5ff481, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xee3ab00b, "wlcore_scan_sched_scan_results" },
	{ 0x9e9b9a17, "wlcore_event_soft_gemini_sense" },
	{ 0xbaf49082, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc609317, "wlcore_tx_complete" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eb7e7a7, "wl1271_debugfs_update_stats" },
	{ 0x6da5a42c, "wlcore_set_scan_chan_params" },
	{ 0xf311e611, "wlcore_boot_run_firmware" },
	{ 0xf30a8956, "wlcore_translate_addr" },
	{ 0xbe08d9d3, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x75c2d6a4, "wlcore_event_roc_complete" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xb98c2b92, "wl1271_cmd_send" },
	{ 0x9ac5b902, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore,mac80211");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "F8535CC476AEA791E59595E");
