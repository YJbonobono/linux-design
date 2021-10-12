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
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbf3ccdd8, "tty_hangup" },
	{ 0x405ffe8c, "do_SAK" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0x2682e179, "tty_prepare_flip_string" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0x521ce967, "tty_port_init" },
	{ 0x9601035f, "request_firmware" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x69acdf38, "memcpy" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb061c975, "tty_port_free_xmit_buf" },
	{ 0x97be6e3e, "tty_port_alloc_xmit_buf" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xe1c05272, "tty_wakeup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B5d00002028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002058sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9EA3B649E3F47EBEF6111E0");
