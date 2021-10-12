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
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x265f55e6, "seq_write" },
	{ 0x1208a414, "seq_putc" },
	{ 0xe66a47be, "remove_proc_subtree" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x2cf944ce, "proc_mkdir_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xedc03953, "iounmap" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x77358855, "iomem_resource" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x6006847, "current_task" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x47f603a1, "pci_alloc_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb177d101, "seq_printf" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0x8308481c, "scsi_bios_ptable" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x29361773, "complete" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000101Ed00009010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00009060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001960sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2715928ABA25212C0CE4E31");
