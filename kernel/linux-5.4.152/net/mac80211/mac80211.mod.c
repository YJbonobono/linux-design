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
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x483d92b0, "crypto_alloc_skcipher" },
	{ 0xbf4cf04, "cfg80211_rx_unprot_mlme_mgmt" },
	{ 0x249292bf, "cfg80211_auth_timeout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x48d37c1b, "cfg80211_cqm_rssi_notify" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x17726e51, "wiphy_free" },
	{ 0xf5dfc4ec, "cfg80211_unlink_bss" },
	{ 0xacd3e017, "__skb_gso_segment" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x275269b3, "ieee80211_ie_split_ric" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x275867e8, "ieee80211_bss_get_elem" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x9fdbd66, "cfg80211_radar_event" },
	{ 0x754d539c, "strlen" },
	{ 0x9e1fd719, "cfg80211_shutdown_all_interfaces" },
	{ 0xd20260f5, "led_trigger_event" },
	{ 0x7d74d522, "kstrtoull_from_user" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x46617fe8, "cfg80211_send_layer2_update" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xd56d55f3, "ieee80211_get_mesh_hdrlen" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7fcc54b8, "cfg80211_report_wowlan_wakeup" },
	{ 0x6d45beab, "led_set_brightness" },
	{ 0xcaac5422, "cfg80211_chandef_create" },
	{ 0xfd205417, "no_llseek" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0xa6ed2662, "led_trigger_register" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37bc3020, "rhltable_init" },
	{ 0x77114bb3, "led_blink_set" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa5976e4f, "dev_base_lock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3afe5f, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x57542ff6, "cfg80211_abandon_assoc" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd264fd59, "crypto_shash_finup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x46312808, "ieee80211_radiotap_iterator_next" },
	{ 0x26280d16, "cfg80211_stop_iface" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x30c2c078, "freq_reg_info" },
	{ 0xc75e957, "cfg80211_probe_status" },
	{ 0x76c9070b, "cfg80211_unregister_wdev" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfbf6141a, "debugfs_rename" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb4ea9d3e, "cfg80211_reg_can_beacon" },
	{ 0x27b25842, "kfree_skb_list" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9db2be18, "cfg80211_check_station_change" },
	{ 0x1f058e8, "cfg80211_ch_switch_started_notify" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde2b23f1, "cfg80211_mgmt_tx_status" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x865029ac, "__hw_addr_sync" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf3c3a2d, "cfg80211_rx_control_port" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xa61aab69, "cfg80211_cqm_beacon_loss_notify" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x1a118ee1, "cfg80211_chandef_usable" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5a0dc0cc, "kernel_param_unlock" },
	{ 0x5674b3cb, "rhashtable_free_and_destroy" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7b8e87cc, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfcb879f8, "ieee80211_data_to_8023_exthdr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb515dfce, "cfg80211_sched_scan_stopped_rtnl" },
	{ 0x66f1773, "cfg80211_notify_new_peer_candidate" },
	{ 0xac97a207, "ieee80211_radiotap_iterator_init" },
	{ 0x63d4ee3f, "led_trigger_unregister" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x30c76023, "free_netdev" },
	{ 0x2347eeec, "debugfs_create_u64" },
	{ 0x9e29c256, "wiphy_unregister" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1a08b249, "crypto_shash_digest" },
	{ 0x9166fada, "strncpy" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0xd063626f, "cfg80211_del_sta_sinfo" },
	{ 0xf6f18d62, "ieee80211_get_channel" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x3bd8aaa1, "ieee80211_operating_class_to_band" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8fa02936, "cfg80211_free_nan_func" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x652032cb, "mac_pton" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e121547, "dev_close" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x64aa05d3, "cfg80211_cqm_pktloss_notify" },
	{ 0xe31b3f7b, "cfg80211_reg_can_beacon_relax" },
	{ 0xc7ee435f, "cfg80211_michael_mic_failure" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x56a3ad28, "cfg80211_report_obss_beacon" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x3a4a4fa7, "cfg80211_iftype_allowed" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xb717ed60, "cfg80211_iter_combinations" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x85f83d64, "cfg80211_chandef_compatible" },
	{ 0xcc574ab, "crypto_shash_setkey" },
	{ 0x31717d12, "cfg80211_nan_match" },
	{ 0x7dd510e4, "cfg80211_ibss_joined" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0x70a3bdf1, "cfg80211_rx_spurious_frame" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd054679d, "kernel_param_lock" },
	{ 0xdc485b1, "cfg80211_assoc_timeout" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xbaaabf1a, "cfg80211_get_drvinfo" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x13550414, "cfg80211_tdls_oper_request" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xfe75cdbf, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd1813e5e, "skb_get_hash_perturb" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0xf538e690, "cfg80211_gtk_rekey_notify" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xa012da1d, "cfg80211_tx_mlme_mgmt" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x716ca28a, "cfg80211_ch_switch_notify" },
	{ 0x9bee1f60, "cfg80211_nan_func_terminated" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7dd616d5, "cfg80211_rx_mlme_mgmt" },
	{ 0x9c10e638, "debugfs_create_x64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1e024dc, "cfg80211_tx_mgmt_expired" },
	{ 0xed3c38d6, "cfg80211_classify8021d" },
	{ 0x543624ad, "skb_checksum_help" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xe0194214, "cfg80211_ready_on_channel" },
	{ 0xb3a91576, "cfg80211_sta_opmode_change_notify" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x7d28b2c4, "wiphy_new_nm" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x15a37cf3, "cfg80211_calculate_bitrate" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad98dfa, "netdev_set_default_ethtool_ops" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xe8dde4f1, "cfg80211_new_sta" },
	{ 0x6439af62, "cfg80211_chandef_valid" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0x89db9f70, "dev_alloc_name" },
	{ 0x4df02057, "crc32_be" },
	{ 0x9eae6235, "ieee80211_chandef_to_operating_class" },
	{ 0x7ef9f5e0, "ieee80211_mandatory_rates" },
	{ 0xb65616a8, "cfg80211_ref_bss" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x3e9110fa, "__hw_addr_unsync" },
	{ 0x3ef4a822, "ieee80211_amsdu_to_8023s" },
	{ 0xcc1a7c48, "cfg80211_is_element_inherited" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x65da6e36, "led_trigger_blink_oneshot" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7a4497db, "kzfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xbfc46c6c, "debugfs_create_u16" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x82ee191e, "debugfs_create_symlink" },
	{ 0x9b862add, "cfg80211_cac_event" },
	{ 0xa63a07c, "bpf_trace_run6" },
	{ 0x605840c3, "cfg80211_remain_on_channel_expired" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc5fb0f3e, "skb_clone_sk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x55c12fe1, "regulatory_pre_cac_allowed" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb832485a, "consume_skb" },
	{ 0x30e007fb, "cfg80211_sched_scan_stopped" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x21b81078, "cfg80211_scan_done" },
	{ 0x45f8ad1c, "cfg80211_chandef_dfs_required" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x117aca91, "cfg80211_merge_profile" },
	{ 0x20978fb9, "idr_find" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd4b5610a, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0x9bded68a, "cfg80211_rx_assoc_resp" },
	{ 0xd262dfcb, "vscnprintf" },
	{ 0xf389fe60, "__hw_addr_init" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb6af3064, "skb_complete_wifi_ack" },
	{ 0x43f5efcf, "cfg80211_sinfo_alloc_tid_stats" },
	{ 0xd052b5e7, "cfg80211_sched_scan_results" },
	{ 0xfe713ff5, "cfg80211_inform_bss_frame_data" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cfg80211,libarc4");


MODULE_INFO(srcversion, "6FE3F3C3C9A0054DC144880");
