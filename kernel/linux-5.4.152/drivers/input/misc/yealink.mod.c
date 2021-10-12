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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf8c679e2, "input_event" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xce807a25, "up_write" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x57bc19d2, "down_write" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v6993pB001d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "BC1EBEFC50489629EE2891A");
