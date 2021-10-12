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
	{ 0xa3106f33, "ieee80211_rx_napi" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfe340d2d, "ssb_dma_translation" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd29e1e95, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x11d771a, "ieee80211_queue_work" },
	{ 0x385f7f72, "bcma_host_pci_down" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x954c01b8, "ieee80211_rts_get" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1ec51218, "ssb_commit_settings" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x25d43687, "ssb_bus_powerup" },
	{ 0xd94b6d66, "bcma_host_pci_up" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xabe27a37, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x66aa833c, "__ieee80211_get_assoc_led_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x307d5d4a, "__ssb_driver_register" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfc40da7d, "ieee80211_stop_queue" },
	{ 0xe61135ed, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x80530abe, "ssb_driver_unregister" },
	{ 0x70963d2, "ssb_chipco_gpio_control" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x4d87dd9a, "bcma_core_dma_translation" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xf8fbbe75, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x1670289f, "ssb_device_enable" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4efe3761, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3dcf59f8, "__bcma_driver_register" },
	{ 0x9b553753, "skb_pull" },
	{ 0x51ad9dca, "ieee80211_ctstoself_get" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xdfe8630c, "bcma_host_pci_irq_ctl" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1b32a727, "bcma_chipco_gpio_control" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x97e6b65e, "__ieee80211_get_rx_led_name" },
	{ 0xce0d72f6, "bcma_core_is_enabled" },
	{ 0xd4cd26cd, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf87fba2b, "ssb_device_disable" },
	{ 0xc7460b8, "bcma_core_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x198af49a, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xe54334c3, "bcma_driver_unregister" },
	{ 0x134f35b0, "bcma_core_pll_ctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xcd4fed17, "__ieee80211_get_tx_led_name" },
	{ 0x4c342d96, "ssb_set_devtypedata" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4a8184b, "ieee80211_wake_queue" },
	{ 0x8b1797e, "ieee80211_generic_frame_duration" },
	{ 0x8a4aeaff, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x9601035f, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0xd031c2a8, "ssb_bus_may_powerdown" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x33489087, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc95443c2, "ssb_pmu_set_ldo_paref" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x16502e71, "ssb_device_is_enabled" },
	{ 0xbb7285c6, "bcma_core_disable" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xf5a1a725, "ssb_pmu_spuravoid_pllupdate" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,cfg80211,cordic");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "D29EBC24D826142A6573616");
