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
	{ 0x284993a2, "rtl_fw_cb" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xab4db47a, "rtl_pci_probe" },
	{ 0xbae59afb, "rtl_cam_get_free_entry" },
	{ 0x7029a322, "rtl92c_phy_set_rfpath_switch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x8703af95, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x911d7d8b, "rtl92c_phy_set_txpower_level" },
	{ 0x64e8491f, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x49426f2, "rtl92c_dm_check_txpower_tracking" },
	{ 0xddc090f6, "rtl_ps_disable_nic" },
	{ 0xbbfb32a7, "rtl92c_dm_watchdog" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3687af2, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0xb6773f62, "_rtl92c_phy_rf_serial_write" },
	{ 0xecb6b38a, "rtl_get_tcb_desc" },
	{ 0xf125b59, "_rtl92c_phy_rf_serial_read" },
	{ 0x888d0e64, "rtl92c_phy_set_bw_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x63ad0069, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x53bafb80, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x43ecc6ed, "rtl_phy_scan_operation_backup" },
	{ 0xde9d950e, "rtl92c_dm_init_edca_turbo" },
	{ 0xdc6ee71b, "rtl92c_phy_iq_calibrate" },
	{ 0xe337a87b, "rtl92c_dm_init" },
	{ 0x2f05bca0, "rtl92c_phy_set_bb_reg" },
	{ 0xd51279e6, "rtl_pci_resume" },
	{ 0x5ba18860, "rtl_ps_enable_nic" },
	{ 0xdca33561, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x26c41424, "rtl92c_firmware_selfreset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xa527ab80, "rtl92c_dm_rf_saving" },
	{ 0xb4064ea4, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xfd5ca18c, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0xbfa35a9, "rtl_pci_suspend" },
	{ 0xcaf5db0c, "rtlwifi_rate_mapping" },
	{ 0x929ab9bd, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xabcd44ee, "rtl92c_download_fw" },
	{ 0x902ba3a5, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa3b69bfd, "rtl_rfreg_delay" },
	{ 0xd65cf22f, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0x8abbc16d, "rtl92c_phy_set_io_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xa518601e, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8e4fceb9, "rtl_cam_mark_invalid" },
	{ 0x97099f43, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xf51f050, "rtl_cam_del_entry" },
	{ 0x7502064b, "rtl92c_set_p2p_ps_offload_cmd" },
	{ 0x101452a7, "rtl_cam_empty_entry" },
	{ 0x49e8d2cf, "rtl92ce_phy_set_rf_on" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x4669b71, "rtl92c_phy_query_bb_reg" },
	{ 0xb9fb1e60, "rtl_cam_reset_all_entry" },
	{ 0xc8cf9f3, "rtl_process_phyinfo" },
	{ 0x83f6f150, "efuse_read_1byte" },
	{ 0x2ad35214, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x6ebcebcc, "rtl92c_fill_h2c_cmd" },
	{ 0x9b690b1c, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x103cf35d, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,rtl8192c-common,mac80211");

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B0C27FAE4DAE18E802DA24E");
