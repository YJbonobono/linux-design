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
	{ 0x9eb9d1af, "register_candev" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0x6833822f, "netif_rx" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x77d59f8f, "close_candev" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x285da97a, "free_candev" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x45b06668, "can_change_mtu" },
	{ 0x546a033e, "can_change_state" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7089480, "unregister_candev" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x96f8c098, "open_candev" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xe4c60f13, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xb832485a, "consume_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v0000001Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000001Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "71094D9B598519DF528DBC2");
