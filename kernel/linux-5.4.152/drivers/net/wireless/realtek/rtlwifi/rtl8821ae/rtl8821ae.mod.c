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
	{ 0x1f7a506a, "rtl_cam_delete_one_entry" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x284993a2, "rtl_fw_cb" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xab4db47a, "rtl_pci_probe" },
	{ 0xbae59afb, "rtl_cam_get_free_entry" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xb72f6d1d, "rtl_dm_diginit" },
	{ 0xddc090f6, "rtl_ps_disable_nic" },
	{ 0xb1f6bd4, "rtl_btc_get_ops_pointer" },
	{ 0x889bc3f8, "rtl_hal_pwrseqcmdparsing" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4ef8150b, "rtl_mrate_idx_to_arfr_id" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xecb6b38a, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x53bafb80, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd51279e6, "rtl_pci_resume" },
	{ 0x5ba18860, "rtl_ps_enable_nic" },
	{ 0xdca33561, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x65ed70db, "rtl_wowlan_fw_cb" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb038e24, "channel5g_80m" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x581cf443, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x600684d4, "rtl_fw_page_write" },
	{ 0xc4d88d70, "efuse_shadow_read" },
	{ 0x93baa52f, "rtl_signal_scale_mapping" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0xa5502fd2, "rtl_set_tx_report" },
	{ 0xbfa35a9, "rtl_pci_suspend" },
	{ 0xcaf5db0c, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x902ba3a5, "rtl_pci_disconnect" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x9e164478, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xa518601e, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8e4fceb9, "rtl_cam_mark_invalid" },
	{ 0x54824f58, "channel5g" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf51f050, "rtl_cam_del_entry" },
	{ 0x101452a7, "rtl_cam_empty_entry" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb9fb1e60, "rtl_cam_reset_all_entry" },
	{ 0xc8cf9f3, "rtl_process_phyinfo" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x103cf35d, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd00008812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008821sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "01B334596B0935FBE322012");
