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
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xb4c3c770, "devm_hwrng_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x84750034, "usb_hid_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x28acfc69, "usb_poison_urb" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v000010C4p00008ACF");

MODULE_INFO(srcversion, "A439C3810E00EA201629FAB");
