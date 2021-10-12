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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4065aae6, "ib_create_ah_from_wc" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x5b9bdef5, "ib_find_pkey" },
	{ 0x3cab7375, "ib_register_mad_agent" },
	{ 0xbf22a37d, "ib_free_recv_mad" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xa99f49b7, "ib_free_send_mad" },
	{ 0x7869d9a8, "rdma_destroy_ah_user" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xc5850110, "printk" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1387ccaf, "__skb_get_hash" },
	{ 0x638148e0, "ib_set_client_data" },
	{ 0xb67ecb17, "ib_create_send_mad" },
	{ 0x8423fbea, "ib_post_send_mad" },
	{ 0x8e23dedf, "ib_unregister_mad_agent" },
	{ 0x300b2c5d, "ib_register_client" },
	{ 0x4c0fe6e5, "ib_unregister_event_handler" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x68bfc054, "ib_register_event_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41e93b83, "rdma_create_ah" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xc63bbabf, "eth_commit_mac_addr_change" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xd505b3ee, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x492452ad, "ib_unregister_client" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x1425ab24, "dev_set_mtu" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "EF492556E87EA79321D9594");
