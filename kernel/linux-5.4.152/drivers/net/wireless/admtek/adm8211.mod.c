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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa4a8184b, "ieee80211_wake_queue" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x960f319c, "ieee80211_rx_irqsafe" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x491661e8, "pci_set_mwi" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb832485a, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfc40da7d, "ieee80211_stop_queue" },
	{ 0xf8fbbe75, "ieee80211_free_txskb" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x581cf443, "skb_push" },
	{ 0x9b553753, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc5850110, "printk" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac80211,cfg80211,eeprom_93cx6");

MODULE_ALIAS("pci:v000010B7d00006000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001200d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008211sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DCD00665E0871037AD4B5A5");
