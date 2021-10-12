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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x57dbcb92, "iw_handler_get_thrspy" },
	{ 0x3fea57d8, "iw_handler_set_thrspy" },
	{ 0x1604b82c, "iw_handler_get_spy" },
	{ 0x3fe0270d, "iw_handler_set_spy" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xe66a47be, "remove_proc_subtree" },
	{ 0x4297c00d, "proc_create_data" },
	{ 0x51463ae5, "proc_create" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x86d5e384, "wireless_spy_update" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x9166fada, "strncpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x72061f63, "pcmcia_map_mem_page" },
	{ 0x5a419e39, "pcmcia_request_window" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x754d539c, "strlen" },
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1208a414, "seq_putc" },
	{ 0xb177d101, "seq_printf" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m01A6c0000f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "ED206D0C73D2C411A0C8EE8");
