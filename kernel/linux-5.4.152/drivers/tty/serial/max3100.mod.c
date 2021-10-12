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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x3be8949a, "uart_write_wakeup" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xc5850110, "printk" },
	{ 0x25ca454d, "uart_register_driver" },
	{ 0x25fce484, "uart_add_one_port" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x95316016, "uart_update_timeout" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb589c1fd, "uart_resume_port" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x6006847, "current_task" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc92dce1a, "uart_insert_char" },
	{ 0x61b020f3, "uart_handle_cts_change" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d17f4dd, "uart_remove_one_port" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd3d70e1c, "uart_unregister_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2bf957a, "uart_suspend_port" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9FAFC90243168E965B96E01");
