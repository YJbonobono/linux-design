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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87221e10, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x30c76023, "free_netdev" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x34a6f339, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A734F78712E8C29F996B503");
