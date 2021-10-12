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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x96fa7a5f, "blkdev_fsync" },
	{ 0x1f95d0a2, "blkdev_write_iter" },
	{ 0xe7d9c60f, "blkdev_read_iter" },
	{ 0xc34b242b, "default_llseek" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x52977a3a, "__class_create" },
	{ 0x97d452, "cdev_add" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc5850110, "printk" },
	{ 0xcdde5cad, "blkdev_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x6b347276, "__module_get" },
	{ 0xb980abe, "bdget" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xffd8dda9, "bdput" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6c45747b, "set_blocksize" },
	{ 0xadb843ef, "blkdev_get" },
	{ 0xc79a846d, "bdgrab" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "96D89E5C9B3F8601C0BC099");
