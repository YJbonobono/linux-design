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
	{ 0x76322293, "ath10k_ce_completed_recv_next_nolock" },
	{ 0xe95d1fc3, "ath10k_htt_txrx_compl_task" },
	{ 0xd174f265, "ath10k_core_unregister" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc45bc71a, "ath10k_htt_t2h_msg_handler" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x42a801e4, "ath10k_info" },
	{ 0xb2e2f402, "ath10k_coredump_new" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x927623ee, "ath10k_core_register" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xde83ae1f, "ath10k_ce_init_pipe" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xac6ebdb1, "ath10k_ce_deinit_pipe" },
	{ 0xcfb81f37, "ath10k_htc_rx_completion_handler" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1e61df3, "ath10k_core_destroy" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x50dd77c4, "__tracepoint_ath10k_log_dbg" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x5b62e955, "ath10k_htt_rx_pktlog_completion_handler" },
	{ 0xe5933d16, "__ath10k_ce_rx_num_free_bufs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x15e5db2, "ath10k_debug_mask" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc3f0fec5, "ath10k_core_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xdea903c7, "ath10k_ce_rx_post_buf" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x308b97f9, "ath10k_ce_enable_interrupts" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x46d6e9f8, "ath10k_ce_per_engine_service_any" },
	{ 0x17ca8e9c, "ath10k_ce_dump_registers" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9cea12ff, "ath10k_ce_completed_send_next" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x43063de1, "ath10k_htc_tx_completion_handler" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x6ac1ef1d, "ath10k_ce_completed_recv_next" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0x1c4d6624, "ath10k_ce_revoke_recv_next" },
	{ 0x2254ded1, "ath10k_ce_free_pipe" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x77ab25d6, "__ath10k_ce_send_revert" },
	{ 0x6ba9e43c, "ath10k_htt_hif_tx_complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xc8b64153, "ath10k_ce_rx_update_write_idx" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1bd705af, "ath10k_ce_num_free_src_entries" },
	{ 0x1af46929, "ath10k_print_driver_info" },
	{ 0x1000e51, "schedule" },
	{ 0x48394541, "ath10k_err" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x81f5da74, "ath10k_coredump_get_mem_layout" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x988512c9, "ath10k_ce_send" },
	{ 0xb08b99ad, "ath10k_ce_cancel_send_next" },
	{ 0xddbc5db6, "ath10k_ce_per_engine_service" },
	{ 0xe5b7ec7f, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc6c2f5f, "ath10k_ce_alloc_pipe" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9f8b3418, "ath10k_ce_send_nolock" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x911c9e1e, "pcie_capability_write_word" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3b223a39, "pcie_capability_read_word" },
	{ 0x9a154023, "ath10k_ce_disable_interrupts" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("pci:v00000777d000011ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F348CDEB1C7E49AB3D41E63");
