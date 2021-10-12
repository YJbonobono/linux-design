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
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x19b208a6, "rio_bus_type" },
	{ 0xeea84570, "rio_mport_class" },
	{ 0x4fc2d391, "class_interface_unregister" },
	{ 0x971f0b73, "subsys_interface_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x5844ac22, "subsys_interface_register" },
	{ 0x34199ef9, "class_interface_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x30c76023, "free_netdev" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc7cb9e34, "rio_local_get_device_id" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x57df5952, "__rio_local_read_config_32" },
	{ 0xf661b8de, "rio_request_outb_dbell" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x35ed8da3, "rio_request_outb_mbox" },
	{ 0x9b41dff7, "rio_request_inb_mbox" },
	{ 0x336da92d, "rio_request_inb_dbell" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfc10eb7e, "rio_release_outb_mbox" },
	{ 0xde1e9153, "rio_release_inb_mbox" },
	{ 0x73378269, "rio_release_inb_dbell" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5792f848, "strlcpy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf86f04a5, "rio_mport_send_doorbell" },
	{ 0x37a0cba, "kfree" },
	{ 0xceb6793d, "rio_release_outb_dbell" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("rapidio:v*d*av*ad*");

MODULE_INFO(srcversion, "84CAB2F8B5BB34C847E4C76");
