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
	{ 0x6e724099, "param_array_ops" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2943c3cb, "scsi_register_driver" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0x52977a3a, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x1cbc34b6, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x361fe89f, "device_destroy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0x458edcfa, "scsi_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb65152bd, "scsi_ioctl_block_when_processing_errors" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3f27ea7e, "scsi_print_sense_hdr" },
	{ 0xaa1ff60, "__scsi_execute" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "21B90B80B9FEAF18C21035F");
