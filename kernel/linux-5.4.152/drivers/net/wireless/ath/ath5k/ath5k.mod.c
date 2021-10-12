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
	{ 0x35e48f2f, "ieee80211_rts_duration" },
	{ 0xa3106f33, "ieee80211_rx_napi" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x11d771a, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x75d94971, "pci_match_id" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x211a5621, "ath_key_delete" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0x1db26282, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x670534e6, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0xfc40da7d, "ieee80211_stop_queue" },
	{ 0xe61135ed, "ieee80211_tx_status" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xf8fbbe75, "ieee80211_free_txskb" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x457cd903, "ath_is_mybeacon" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdfe1ea72, "ath_reg_notifier_apply" },
	{ 0xd59a07c2, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x80686adc, "pci_disable_link_state" },
	{ 0x6dce23b7, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0x97e6b65e, "__ieee80211_get_rx_led_name" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x198af49a, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x833425ed, "ath_hw_cycle_counters_update" },
	{ 0x2a4e02da, "ieee80211_get_tx_rates" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaee05e8a, "ieee80211_get_buffered_bc" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xcd4fed17, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x108b188f, "ath_is_49ghz_allowed" },
	{ 0xc5d5b0c1, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4a8184b, "ieee80211_wake_queue" },
	{ 0x8b1797e, "ieee80211_generic_frame_duration" },
	{ 0x6d0f4e5e, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x33221c30, "ieee80211_ctstoself_duration" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a63c4a, "regulatory_hint" },
	{ 0x9c912d44, "ath_rxbuf_alloc" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc6bd4037, "ath_key_config" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3023ef06, "ath_hw_keyreset" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,cfg80211,ath");

MODULE_ALIAS("pci:v0000168Cd00000207sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "37FFBA4EC6CDE2F9D7F8853");
