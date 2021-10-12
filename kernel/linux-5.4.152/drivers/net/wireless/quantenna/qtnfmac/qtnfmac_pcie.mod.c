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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5a585aa2, "init_dummy_netdev" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x886e005c, "qtnf_packet_send_hi_pri" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xe6577433, "qtnf_update_tx_stats" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x6f12f138, "qtnf_get_debugfs_dir" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xfd94814e, "complete_all" },
	{ 0x31fab83c, "qtnf_chipid_to_string" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa7ef3bd5, "pcie_get_mps" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xa1d2e955, "qtnf_trans_handle_rx_ctl_packet" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x31673581, "pcie_set_mps" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb3877ad7, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76f26366, "pci_intx" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbfd5a312, "qtnf_classify_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x45533924, "qtnf_core_detach" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x84540b22, "qtnf_wake_all_queues" },
	{ 0x3750a460, "get_device" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x3de797d4, "qtnf_update_rx_stats" },
	{ 0x5305c457, "qtnf_core_attach" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "qtnfmac");

MODULE_ALIAS("pci:v00001BB5d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4B31F9BA493A49548FBEAEB");
