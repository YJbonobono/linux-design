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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe8b68246, "nfc_hci_recv_frame" },
	{ 0x61f9822a, "mei_cldev_set_drvdata" },
	{ 0x752afcba, "mei_cldev_register_rx_cb" },
	{ 0xdf8a7f4a, "mei_cldev_get_drvdata" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9a6314f6, "mei_cldev_enable" },
	{ 0x19fb8c1b, "mei_cldev_send" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc5850110, "printk" },
	{ 0x14342502, "mei_cldev_recv" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9b553753, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xa110af89, "mei_cldev_disable" },
};

MODULE_INFO(depends, "hci,mei");


MODULE_INFO(srcversion, "2A278AE441CA0B1DF3286C4");
