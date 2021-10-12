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
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0x52977a3a, "__class_create" },
	{ 0xfc07bdb7, "roccat_connect" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002CED");

MODULE_INFO(srcversion, "9A22817899B4E7F000C6709");
