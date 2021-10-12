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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xa6ea5200, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xeb09db31, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0x83f9ce14, "can_send" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x893a5c26, "netlink_capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x2160e9, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "A52AE0B2F952AAE3FEB2BA8");
