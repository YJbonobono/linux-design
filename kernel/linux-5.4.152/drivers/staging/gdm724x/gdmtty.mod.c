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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x81188c30, "match_string" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x2cb0a0d9, "tty_buffer_request_room" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x784ba9be, "tty_port_put" },
	{ 0xfb578fc5, "memset" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe220f939, "tty_vhangup" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf96cabf, "tty_port_tty_wakeup" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xfd5ae162, "tty_standard_install" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p8F00d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1D74p2300d*dc*dsc*dp*ic02isc02ip*in*");

MODULE_INFO(srcversion, "2974B19F7EF03299495C58E");
