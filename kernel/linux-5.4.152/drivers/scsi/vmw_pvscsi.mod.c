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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x87b8798d, "sg_next" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0x29361773, "complete" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0xd6762310, "scsi_host_get" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3F5EE0E9EFAA16450D33519");
