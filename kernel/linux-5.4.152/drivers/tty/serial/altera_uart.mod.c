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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xd3d70e1c, "uart_unregister_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x25ca454d, "uart_register_driver" },
	{ 0x3be8949a, "uart_write_wakeup" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0x405ffe8c, "do_SAK" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc92dce1a, "uart_insert_char" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x25fce484, "uart_add_one_port" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x95316016, "uart_update_timeout" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x2350ef4b, "uart_get_baud_rate" },
	{ 0xedc03953, "iounmap" },
	{ 0x5d17f4dd, "uart_remove_one_port" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B82C2441E8F2D4331A502A0");
