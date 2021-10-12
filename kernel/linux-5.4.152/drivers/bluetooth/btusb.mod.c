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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xaf7c85d8, "device_wakeup_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x80c2404b, "usb_get_from_anchor" },
	{ 0xefb22ee3, "usb_enable_autosuspend" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x9e5046ed, "btrtl_shutdown_realtek" },
	{ 0x20a5b2fa, "btrtl_setup_realtek" },
	{ 0xfd71deaa, "btbcm_setup_apple" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0x88084d02, "btbcm_set_bdaddr" },
	{ 0x14f58185, "btbcm_setup_patchram" },
	{ 0x35524d9a, "usb_match_id" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x2e985a00, "usb_driver_claim_interface" },
	{ 0x33e67919, "btintel_set_diag" },
	{ 0x8898a746, "btintel_hw_error" },
	{ 0x4358249a, "btintel_set_bdaddr" },
	{ 0xa49e960d, "btintel_set_diag_mfg" },
	{ 0xa80a6d9b, "gpiod_get_optional" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x92669cb6, "hci_recv_diag" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xccda5964, "btintel_set_event_mask" },
	{ 0xd5a7fdb5, "btintel_load_ddc_config" },
	{ 0x8aeb5a46, "btintel_send_intel_reset" },
	{ 0xfd5f39bb, "btintel_download_firmware" },
	{ 0xa0cd2b9d, "btintel_read_boot_params" },
	{ 0x74f94141, "btintel_version_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe359da9c, "__hci_cmd_send" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x62b47781, "btintel_check_bdaddr" },
	{ 0x5b773ede, "btintel_set_event_mask_mfg" },
	{ 0x2ce05240, "btintel_exit_mfg" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd4f6cdf3, "__hci_cmd_sync_ev" },
	{ 0x41cadb41, "btintel_enter_mfg" },
	{ 0x9601035f, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9d6bc8d0, "btintel_read_version" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x399818dd, "__hci_cmd_sync" },
	{ 0xd9afef59, "usb_driver_release_interface" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btrtl,btbcm,bluetooth,btintel");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "81F376CE72A5C9E38BA6310");
