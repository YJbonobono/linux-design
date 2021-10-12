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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x94567929, "__class_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x335e4ce6, "device_add" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xea5722fc, "cros_ec_cmd_xfer_status" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x51ce92, "device_unregister" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:cros-ec-dev");

MODULE_INFO(srcversion, "03FA44B75BCC4CA776AF11F");
