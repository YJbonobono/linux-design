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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x405ffe8c, "do_SAK" },
	{ 0xbf3ccdd8, "tty_hangup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xaaab2511, "tty_port_tty_hangup" },
	{ 0x29361773, "complete" },
	{ 0x2cb0a0d9, "tty_buffer_request_room" },
	{ 0xb272b954, "tty_schedule_flip" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd7311151, "tty_port_tty_set" },
	{ 0xf849acb0, "tty_port_block_til_ready" },
	{ 0xf4e8dfea, "tty_port_raise_dtr_rts" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0xe1c05272, "tty_wakeup" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa2a04a41, "tty_port_lower_dtr_rts" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xb177d101, "seq_printf" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0xb68a80b3, "tty_ldisc_deref" },
	{ 0x3f293df0, "tty_ldisc_ref" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000120Ed00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "60B5682F8060EBC210DE689");
