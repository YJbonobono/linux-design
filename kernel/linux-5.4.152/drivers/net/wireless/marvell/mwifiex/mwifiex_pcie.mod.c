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
	{ 0x9b130b11, "pci_release_region" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x6c787a9, "mwifiex_cancel_hs" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xf1fe6d, "mwifiex_disable_auto_ds" },
	{ 0xa5c3a8fe, "pci_try_reset_function" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xef10693d, "mwifiex_write_data_complete" },
	{ 0x99ebdfc8, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a136096, "mwifiex_queue_main_work" },
	{ 0x93c9236a, "mwifiex_prepare_fw_dump_info" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x799da697, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xb8933534, "mwifiex_add_card" },
	{ 0xf10de535, "ioread8" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x581cf443, "skb_push" },
	{ 0xf0a4f41b, "mwifiex_shutdown_sw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x5c405dbb, "mwifiex_reinit_sw" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb5a517a5, "mwifiex_handle_rx_packet" },
	{ 0xdf09e813, "mwifiex_deauthenticate_all" },
	{ 0xccb03ca4, "mwifiex_remove_card" },
	{ 0xd2869ed7, "mwifiex_enable_hs" },
	{ 0xf75ca138, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xd22030a1, "mwifiex_drv_info_dump" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xcf2aa48c, "mwifiex_init_shutdown_fw" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("pci:v000011ABd00002B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00002B42sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "745B3F5EFD6A50A12004D03");
