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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xc6ba1c5f, "queue_ch_frame" },
	{ 0xb2f5caad, "dchannel_senddata" },
	{ 0x12ef153d, "create_l1" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xc3b456ac, "bchannel_senddata" },
	{ 0x7e6a3684, "mISDN_ctrl_bchannel" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x9cc93f3a, "mISDN_clear_bchannel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xa404fad3, "mISDN_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xe64b92b6, "mISDN_initbchannel" },
	{ 0xc2613dab, "mISDN_initdchannel" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xac554140, "mISDN_freedchannel" },
	{ 0x4c2839db, "mISDN_freebchannel" },
	{ 0xeebd20ca, "mISDN_unregister_device" },
	{ 0x588886a6, "l1_event" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xf1851b9d, "recv_Echannel" },
	{ 0x416d8e47, "recv_Bchannel" },
	{ 0x78f098d5, "recv_Dchannel" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xfc396865, "bchannel_get_rxbuf" },
	{ 0x31a4dee5, "get_next_bframe" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x7e728570, "get_next_dframe" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc5850110, "printk" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDN_core");

MODULE_ALIAS("usb:v0959p2BD0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p1688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0846d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0847d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Dp1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0525d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C85B33930FBF788A43D1735");
