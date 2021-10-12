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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x9c30bd95, "gb_gbphy_register_driver" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb56638e7, "gb_connection_disable_rx" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x61991828, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x784ba9be, "tty_port_put" },
	{ 0xfbe8a140, "gb_gbphy_deregister_driver" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc6979144, "gb_connection_enable_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x26b4912b, "gb_operation_sync_timeout" },
	{ 0xe220f939, "tty_vhangup" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf96cabf, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfd5ae162, "tty_standard_install" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x20978fb9, "idr_find" },
	{ 0xdd92a2e8, "gb_operation_get_payload_size_max" },
	{ 0x281823c5, "__kfifo_out_peek" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "C75DCD2FF937FFDEF0E70B2");
