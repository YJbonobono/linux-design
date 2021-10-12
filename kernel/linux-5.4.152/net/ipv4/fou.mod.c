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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcaa1c0db, "inet6_offloads" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x67a22961, "udp_sock_create6" },
	{ 0xd3fdc74, "setup_udp_tunnel_sock" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x34649007, "udp_tunnel_sock_release" },
	{ 0x36d51b6c, "ip_tunnel_encap_del_ops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x1387ccaf, "__skb_get_hash" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0x32926df, "iptunnel_handle_offloads" },
	{ 0xd0e59cc4, "inet_protos" },
	{ 0xcb4f76b9, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0x7768008f, "udp_set_csum" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0xf651c990, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x87620973, "inet_get_local_port_range" },
	{ 0xbb97305c, "ip_tunnel_encap_add_ops" },
	{ 0x9483792a, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel,ip_tunnel");


MODULE_INFO(srcversion, "4229586F03DCAD1C6693D72");
