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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xec38b463, "rio_unregister_mport" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xef4b66f5, "pcie_capability_clear_and_set_word" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6708a955, "rio_mport_initialize" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x99989e3, "rio_register_mport" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc66a4f96, "rio_inb_pwrite_handler" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000111Dd000080ABsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "858E07EDFB4EBFE9858514E");
