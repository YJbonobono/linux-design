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
	{ 0xd3d70e1c, "uart_unregister_driver" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x25ca454d, "uart_register_driver" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x25fce484, "uart_add_one_port" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3be8949a, "uart_write_wakeup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x95316016, "uart_update_timeout" },
	{ 0x2350ef4b, "uart_get_baud_rate" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x5d17f4dd, "uart_remove_one_port" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb2bf957a, "uart_suspend_port" },
	{ 0xb589c1fd, "uart_resume_port" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "29A03E682CA4E6C50FC42F3");
