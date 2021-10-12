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
	{ 0x6e724099, "param_array_ops" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0xd81336d0, "seq_release_private" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x13abdd5a, "hostap_dump_tx_header" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfd412460, "hostap_check_sta_fw_version" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4a61cb7c, "hostap_init_ap_proc" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0xc1959a61, "hostap_init_proc" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xd8d72f3f, "hostap_add_interface" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x386c6902, "hostap_init_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x89db9f70, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9307624b, "hostap_80211_ops" },
	{ 0xbfb18989, "hostap_setup_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb9d50d96, "lib80211_crypt_info_init" },
	{ 0x8990a231, "hostap_info_init" },
	{ 0x75934c58, "hostap_set_multicast_list_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xa916b694, "strnlen" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x5af15152, "hostap_get_porttype" },
	{ 0x7f9d0fd7, "hostap_set_auth_algs" },
	{ 0xd2a008c9, "hostap_set_roaming" },
	{ 0x4af19f9f, "hostap_set_encryption" },
	{ 0x529c5799, "hostap_set_string" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x141bf8e3, "hostap_set_antsel" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x25df43a3, "seq_open_private" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x30c76023, "free_netdev" },
	{ 0x7dad46ae, "hostap_set_hostapd_sta" },
	{ 0x2d165dd1, "hostap_set_hostapd" },
	{ 0x47b7f7e2, "hostap_remove_proc" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xe2bb364a, "hostap_free_data" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x79368bb7, "lib80211_crypt_info_free" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xf3cb344f, "hostap_remove_interface" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x265f55e6, "seq_write" },
	{ 0x760a0f4f, "yield" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb177d101, "seq_printf" },
	{ 0x7ce2abe5, "prism2_update_comms_qual" },
	{ 0x902dce33, "hostap_info_process" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fb75891, "hostap_dump_rx_header" },
	{ 0x6fd1f7a9, "hostap_80211_rx" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xb832485a, "consume_skb" },
	{ 0xf8496da8, "hostap_handle_sta_tx_exc" },
	{ 0xb0e602eb, "memmove" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb4b77c8b, "hostap_80211_get_hdrlen" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x993230c1, "hostap_set_word" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "hostap,lib80211");

MODULE_ALIAS("pci:v00001260d00003872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003873sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000167Dd0000A000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34E2C2D49DE20527B818803");
