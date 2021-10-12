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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0x6833822f, "netif_rx" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xc287d58e, "gro_cells_receive" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0x9eac8aa1, "skb_to_sgvec" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x3abe2035, "skb_cow_data" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x581cf443, "skb_push" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0xa4068433, "netdev_upper_dev_link" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xea29a0bd, "netif_stacked_transfer_operstate" },
	{ 0x1425ab24, "dev_set_mtu" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a4497db, "kzfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x34af6819, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x4efaedf0, "dev_uc_unsync" },
	{ 0x1c1468b3, "dev_mc_unsync" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x8cb12717, "dev_set_promiscuity" },
	{ 0x90e81c4a, "dev_set_allmulti" },
	{ 0x6131b104, "dev_uc_sync" },
	{ 0xd596d6d4, "dev_mc_sync" },
	{ 0x16a2895a, "dev_uc_del" },
	{ 0xb556c8fc, "dev_uc_add" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "812CA8ECDF1EFF68C24068F");
