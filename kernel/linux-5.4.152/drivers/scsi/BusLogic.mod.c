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
	{ 0x138133c8, "param_ops_charp" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x72b243d4, "free_dma" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x868acba5, "get_options" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x8308481c, "scsi_bios_ptable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5850110, "printk" },
	{ 0xa916b694, "strnlen" },
	{ 0xac94e86b, "vsprintf" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0x265f55e6, "seq_write" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Bd00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00000140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00008130sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3ECE20F41B44E543D8E69BD");
