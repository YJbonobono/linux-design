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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0x521ce967, "tty_port_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0xf96cabf, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xfd5ae162, "tty_standard_install" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaaab2511, "tty_port_tty_hangup" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001931d0000000Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "42E0B52F65CE67F72B4361E");
