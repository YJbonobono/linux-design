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
	{ 0x63d4ee3f, "led_trigger_unregister" },
	{ 0xa6ed2662, "led_trigger_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x38f3e6e4, "sysfs_add_file_to_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x8d817ccf, "sysfs_remove_file_from_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6d45beab, "led_set_brightness" },
	{ 0x523b3f24, "usb_for_each_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0BC3FA19429BCC50DFB290");
