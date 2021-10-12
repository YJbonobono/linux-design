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
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xc5850110, "printk" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x521ce967, "tty_port_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xfd5ae162, "tty_standard_install" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1208a414, "seq_putc" },
	{ 0xb177d101, "seq_printf" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xe1c05272, "tty_wakeup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0xaaab2511, "tty_port_tty_hangup" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x2d42350d, "sdio_writeb" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x6006847, "current_task" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x784ba9be, "tty_port_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "F71EA00D7DECD686DE010F5");
