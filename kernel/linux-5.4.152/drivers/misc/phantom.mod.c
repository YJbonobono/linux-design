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
	{ 0xfd205417, "no_llseek" },
	{ 0xf99e5e76, "show_class_attr_string" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x504a524d, "class_remove_file_ns" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd952d8a1, "class_create_file_ns" },
	{ 0x52977a3a, "__class_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x97d452, "cdev_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x361fe89f, "device_destroy" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00009050bc06sc80i*");

MODULE_INFO(srcversion, "2A8B2E9E455C502B2DB4427");
