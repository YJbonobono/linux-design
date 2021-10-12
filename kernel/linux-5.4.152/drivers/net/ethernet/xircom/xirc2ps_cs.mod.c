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
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x72061f63, "pcmcia_map_mem_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5a419e39, "pcmcia_request_window" },
	{ 0xdedecca6, "pcmcia_write_config_byte" },
	{ 0xffebc1be, "pcmcia_loop_tuple" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc5850110, "printk" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0xb1e74460, "pcmcia_get_mac_from_cis" },
	{ 0x7b9f0ee0, "pcmcia_get_tuple" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0xb832485a, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0089c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc0EA978EApd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc80609023pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcA650C32Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc76DF1D29pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcF1403719pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pbECA401BFpc*pd*");
MODULE_ALIAS("pcmcia:m01BFc010Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B3B94FEpb*pcF381C1A2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc0EC0AC37pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc947D9073pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc2464A6E3pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc3E08D609pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pcF7188E46pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49CpbEFE96769pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb174397DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44A09D9CpbB44DEECFpc*pd*");

MODULE_INFO(srcversion, "13634A5F5574905A40562D1");
