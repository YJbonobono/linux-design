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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xdca121b6, "register_console" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x61991828, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xbf3ccdd8, "tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x552748e0, "unregister_console" },
	{ 0xe1c05272, "tty_wakeup" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "2897E962FA98AE9988F8B5E");
