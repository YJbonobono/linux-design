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
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x4bb3bc45, "netdev_master_upper_dev_link" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0x581cf443, "skb_push" },
	{ 0xc287d58e, "gro_cells_receive" },
	{ 0x9b553753, "skb_pull" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4068433, "netdev_upper_dev_link" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x34af6819, "gro_cells_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb832485a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9AF704597B36B53DCDEA2A1");
