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
	{ 0x3c350e98, "dsa_tag_drivers_unregister" },
	{ 0x46edaba5, "dsa_tag_drivers_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x59a2f0ee, "packing" },
	{ 0x417d1fed, "dsa_8021q_rx_switch_id" },
	{ 0x9e59271d, "dsa_8021q_rx_source_port" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0xc902698a, "__skb_vlan_pop" },
	{ 0x581cf443, "skb_push" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x976f5a38, "dsa_defer_xmit" },
	{ 0x9916624c, "dsa_8021q_xmit" },
	{ 0x83fbaef9, "netdev_txq_to_tc" },
	{ 0x29638ac8, "dsa_8021q_tx_vid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core,tag_8021q");


MODULE_INFO(srcversion, "390C6D6E6C24C3DCFB96648");
