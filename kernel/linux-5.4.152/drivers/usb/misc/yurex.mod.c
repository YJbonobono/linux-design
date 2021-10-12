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
	{ 0xc34b242b, "default_llseek" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x28acfc69, "usb_poison_urb" },
	{ 0x4f37f769, "usb_deregister_dev" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xd4fdc31, "usb_register_dev" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x91f11014, "usb_get_intf" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3ef9e067, "usb_find_interface" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x109cb0ec, "usb_put_intf" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "22927DC983BADD56F6F624D");
