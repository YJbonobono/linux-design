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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x56375e25, "usb_reset_configuration" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x94e48364, "param_ops_short" },
	{ 0x51b9cbc6, "dvb_usbv2_generic_rw_locked" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xadd11ee8, "dvb_usbv2_probe" },
	{ 0xa3b96724, "rc_keydown" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xc516686a, "dvb_usbv2_disconnect" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "dvb-core,dvb_usb_v2,rc-core");

MODULE_ALIAS("usb:v3344p1122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p1120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p22F0d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "511205EA926508720321856");
