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
	{ 0x13caabab, "noop_llseek" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0x52977a3a, "__class_create" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xf83f6a04, "dma_get_required_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x66797b9b, "scsi_block_requests" },
	{ 0x1db69593, "scsi_unblock_requests" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9166fada, "strncpy" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0xc94ac6ca, "scsi_device_set_state" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6006847, "current_task" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x83e3f2e3, "blk_mq_tag_to_rq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x87b8798d, "sg_next" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb578fc5, "memset" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001044d0000A501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001044d0000A511sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0859761106C00AE9D68CC65");
