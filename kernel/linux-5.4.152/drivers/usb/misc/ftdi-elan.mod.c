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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd205417, "no_llseek" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x4f37f769, "usb_deregister_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd4fdc31, "usb_register_dev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x9570732b, "platform_device_register" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x3ef9e067, "usb_find_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x29361773, "complete" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0403pD6EAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BA6C1E3963839E5124C546F");
