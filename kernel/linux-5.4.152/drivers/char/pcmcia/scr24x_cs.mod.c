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
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x52977a3a, "__class_create" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x361fe89f, "device_destroy" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x97d452, "cdev_add" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x1693b589, "devm_ioport_map" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x848d372e, "iowrite8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xf9575308, "stream_open" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53CB94F9pbBFDF89A5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6271EFA3pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2054E8DEpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54A33665pb*pc*pd*");

MODULE_INFO(srcversion, "D25BB8C2A9A2E6FE15F358E");
