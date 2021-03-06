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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xaa7902b4, "pci_enable_sriov" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb17d83d4, "pci_disable_sriov" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9ec03055, "pcie_capability_read_dword" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x43688b2c, "devlink_alloc" },
	{ 0x2a8aa780, "devlink_params_register" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1692d910, "devlink_params_publish" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc6efa933, "devlink_param_driverinit_value_set" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x466e1228, "build_skb" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe2aae5cc, "crc8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xc80afa88, "devlink_free" },
	{  0xbcc7a, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xfec4b9c6, "devlink_params_unregister" },
	{ 0x9601035f, "request_firmware" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x6b6e4fab, "devlink_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1632f101, "pci_find_ext_capability" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "crc8");


MODULE_INFO(srcversion, "08A9D1123EB7976DC7ACA86");
