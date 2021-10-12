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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0xc7dccae3, "tty_port_link_device" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xb272b954, "tty_schedule_flip" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x2682e179, "tty_prepare_flip_string" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x9601035f, "request_firmware" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf849acb0, "tty_port_block_til_ready" },
	{ 0xd7311151, "tty_port_tty_set" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xe1c05272, "tty_wakeup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc3d41234, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaaab2511, "tty_port_tty_hangup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001393d00002180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00003200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00002040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CDF0F9AE4273EFDF52967F1");
