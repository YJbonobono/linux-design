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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x29361773, "complete" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x317a94c8, "nand_status_op" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcf8f9f05, "nand_read_oob_op" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x5cf8e4c2, "sm_register_device" },
	{ 0xc5850110, "printk" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xe997d403, "nand_release" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xfca4ce88, "nand_deselect_target" },
	{ 0x14b6b66f, "nand_reset_op" },
	{ 0xe4ee511, "nand_select_target" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nand,sm_common");

MODULE_ALIAS("pci:v00001180d00000852sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A129D9BECCC0FB08369DD2");
