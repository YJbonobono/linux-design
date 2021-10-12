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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd26478e2, "__lbtf_cmd" },
	{ 0x3ffb0d30, "lbtf_cmd_copyback" },
	{ 0xbbd3f7c6, "lbtf_cmd_response_rx" },
	{ 0x110f9519, "lbtf_send_tx_feedback" },
	{ 0xbc0cdc98, "lbtf_add_card" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc33b10b3, "lbtf_remove_card" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5a0dc0cc, "kernel_param_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd054679d, "kernel_param_lock" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x7b54e178, "lbtf_rx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5910c33e, "lbtf_bcn_sent" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "libertas_tf");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "47352EB8E8343390078FDA7");
