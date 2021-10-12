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
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x8a9d41e1, "devm_fpga_region_create" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb1d86bc1, "platform_device_del" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd9f138a7, "fpga_region_unregister" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x97d452, "cdev_add" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8f3bd317, "fpga_region_register" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3750a460, "get_device" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "fpga-region");


MODULE_INFO(srcversion, "7E57407C8A12714ACCA2931");
