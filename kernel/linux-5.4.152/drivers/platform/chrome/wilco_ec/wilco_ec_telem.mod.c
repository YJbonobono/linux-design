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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0xfd205417, "no_llseek" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc5850110, "printk" },
	{ 0xfe88c2, "wilco_ec_mailbox" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x94567929, "__class_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66c5171f, "cdev_device_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3750a460, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x6cc5ecb4, "cdev_device_del" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "wilco_ec");


MODULE_INFO(srcversion, "31721EAE3A91FAC0A76655B");
