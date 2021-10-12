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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x22517c8e, "mcb_unregister_driver" },
	{ 0xd3d70e1c, "uart_unregister_driver" },
	{ 0x108e2f2e, "__mcb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x25ca454d, "uart_register_driver" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf966d3ca, "uart_handle_dcd_change" },
	{ 0x405ffe8c, "do_SAK" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x61b020f3, "uart_handle_cts_change" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x2cb0a0d9, "tty_buffer_request_room" },
	{ 0x848d372e, "iowrite8" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3be8949a, "uart_write_wakeup" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x25fce484, "uart_add_one_port" },
	{ 0x69e89829, "mcb_get_irq" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf10de535, "ioread8" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x95316016, "uart_update_timeout" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2350ef4b, "uart_get_baud_rate" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xedc03953, "iounmap" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x24f15481, "mcb_request_mem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5d17f4dd, "uart_remove_one_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "2D92F3DA81C684AA51A73AC");
