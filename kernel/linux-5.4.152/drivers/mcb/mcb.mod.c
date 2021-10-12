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
	{ 0x55353855, "bus_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x77358855, "iomem_resource" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x97c17ef1, "device_attach" },
	{ 0x335e4ce6, "device_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x4cce07e3, "bus_for_each_dev" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3750a460, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x96848186, "scnprintf" },
	{ 0x51ce92, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "80DEA10211A91A90DC298F9");
