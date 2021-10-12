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
	{ 0xe3b66737, "class_find_device" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x65cbf394, "fpga_mgr_load" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2c8167cf, "fpga_bridges_disable" },
	{ 0x335e4ce6, "device_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb910c23e, "fpga_mgr_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x633c4b9, "fpga_bridges_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3750a460, "get_device" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x51ce92, "device_unregister" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x4bad2f25, "fpga_mgr_lock" },
	{ 0x52977a3a, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "fpga-mgr,fpga-bridge");


MODULE_INFO(srcversion, "61E6DDBC4D1BBE9EA04E0EA");
