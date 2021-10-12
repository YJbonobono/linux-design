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
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc5850110, "printk" },
	{ 0xc8c163e5, "l2tp_nl_register_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd49a78f2, "l2tp_session_delete" },
	{ 0x30c76023, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b347276, "__module_get" },
	{ 0x958f25db, "l2tp_session_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0xcc29edd4, "l2tp_session_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf11f616d, "release_sock" },
	{ 0x65f5d803, "kernel_sock_ip_overhead" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x66757d2b, "l2tp_session_create" },
	{ 0x754d539c, "strlen" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8251e2f1, "__skb_ext_del" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xb0704523, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x42f914b7, "dev_forward_skb" },
	{ 0xf516e480, "l2tp_xmit_skb" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xb177d101, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "52DA3923CA63FF798CEC380");
