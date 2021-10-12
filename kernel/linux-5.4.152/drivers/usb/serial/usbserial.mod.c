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
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb68a80b3, "tty_ldisc_deref" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8d252fac, "usb_unpoison_urb" },
	{ 0x28acfc69, "usb_poison_urb" },
	{ 0x1208a414, "seq_putc" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe220f939, "tty_vhangup" },
	{ 0x3f293df0, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x335e4ce6, "device_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc615e3f, "usb_store_new_id" },
	{ 0x35524d9a, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf96cabf, "tty_port_tty_wakeup" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x91f11014, "usb_get_intf" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xbf3ccdd8, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfd5ae162, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xe67be5cc, "usb_match_one_id" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5258e02b, "driver_attach" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x20978fb9, "idr_find" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x109cb0ec, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD14EE38A11E09A5E7CC930");
