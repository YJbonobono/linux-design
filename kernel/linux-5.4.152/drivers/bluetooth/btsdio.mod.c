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
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x9b553753, "skb_pull" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0x581cf443, "skb_push" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0x2d42350d, "sdio_writeb" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "58398886812F0B4CE9E4672");
