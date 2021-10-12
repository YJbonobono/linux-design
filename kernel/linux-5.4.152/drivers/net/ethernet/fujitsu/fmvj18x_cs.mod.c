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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xc5850110, "printk" },
	{ 0xb1e74460, "pcmcia_get_mac_from_cis" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0xd73352ba, "pcmcia_release_window" },
	{ 0xe296672d, "register_netdev" },
	{ 0x72061f63, "pcmcia_map_mem_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5a419e39, "pcmcia_request_window" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b9f0ee0, "pcmcia_get_tuple" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0xb832485a, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0004c0004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa528C88C4pb74F91E59pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53AF556Epb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF47E6C66pb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb5BAF31DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb3F04875Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB8451188pb12939BA2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF4F43949pb773910F4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3Apb075FC7B6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3ApbBCCF43E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pbD9413666pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb8FA0EE70pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb7683BC9Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D8FEE2pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2599F454pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8F4005DApb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa90888080pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa1EAE9475pbD9A93BEDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa18DF0BA0pb831B1064pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0D0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0E0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0E01f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0A05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0B05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c1101f*fn*pfn00pa*pb*pc*pd*");

MODULE_INFO(srcversion, "1E8A5E29CEAFAC5E4AD56B7");
