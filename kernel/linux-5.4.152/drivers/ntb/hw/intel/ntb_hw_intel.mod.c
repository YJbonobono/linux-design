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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x27916597, "ntb_unregister_device" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x10ca65ff, "ntb_register_device" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76f26366, "pci_intx" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xbe86e725, "ntb_db_event" },
	{ 0x9bc3cd, "ntb_link_event" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x103cf35d, "param_ops_ullong" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v00008086d00003725sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003726sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000201Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8B1C714F8182AE603F53976");
