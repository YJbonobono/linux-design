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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x8a362720, "d_path" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x77358855, "iomem_resource" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x75d94971, "pci_match_id" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xfd205417, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb8a800f7, "__get_task_comm" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a9cd14e, "device_create" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x97d452, "cdev_add" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3750a460, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5e1988e9, "zap_vma_ptes" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0cca725, "class_destroy" },
	{ 0xc88c39db, "task_active_pid_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52977a3a, "__class_create" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x71dc307b, "__put_page" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4738778E68A831E1C888FA4");
