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
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x718b8b7, "bt_info" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9601035f, "request_firmware" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x581cf443, "skb_push" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEFCE0A31pb*pcD4CE9B02pd*");

MODULE_INFO(srcversion, "961A8E992FFA2DCD4023B7C");
