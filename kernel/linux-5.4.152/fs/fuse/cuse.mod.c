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
	{ 0xd49cc75f, "fuse_file_poll" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x93082893, "misc_deregister" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x52977a3a, "__class_create" },
	{ 0xd63e67bd, "fuse_dev_operations" },
	{ 0xc5850110, "printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0x97d452, "cdev_add" },
	{ 0x54e49788, "cdev_alloc" },
	{ 0x335e4ce6, "device_add" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9c3a9047, "fuse_dev_free" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x1b116504, "fuse_simple_background" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xe28b7833, "fuse_dev_alloc_install" },
	{ 0x6385c736, "fuse_conn_init" },
	{ 0x3a0f95b1, "fuse_dev_fiq_ops" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fcf8906, "fuse_direct_io" },
	{ 0x962c438f, "fuse_do_ioctl" },
	{ 0xa748030a, "fuse_do_open" },
	{ 0xe4ba58b6, "fuse_conn_get" },
	{ 0x32e4a692, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x53eb9ca0, "fuse_dev_release" },
	{ 0x734fb869, "fuse_conn_put" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x51ce92, "device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc496ca5d, "fuse_abort_conn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C41C4712CF99D7D5868447");
