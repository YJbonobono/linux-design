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
	{ 0x13caabab, "noop_llseek" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xd4fdc31, "usb_register_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x91f11014, "usb_get_intf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x3ef9e067, "usb_find_interface" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x4f37f769, "usb_deregister_dev" },
	{ 0x109cb0ec, "usb_put_intf" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x1000e51, "schedule" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFA4AEE65DA637CC5975DD9");
