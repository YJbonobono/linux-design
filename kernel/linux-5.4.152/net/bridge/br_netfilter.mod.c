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
	{ 0xffda8933, "pskb_trim_rcsum_slow" },
	{ 0x875976ee, "skb_ext_add" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x86a3b7ac, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xb0704523, "dst_release" },
	{ 0xee25e17e, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf591753d, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x412eff53, "nf_hook_slow" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x3dd1267f, "br_dev_queue_push_xmit" },
	{ 0xc5850110, "printk" },
	{ 0xff94df87, "nf_unregister_net_hooks" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x581cf443, "skb_push" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0x4026ed7f, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x37531052, "ip_route_input_noref" },
	{ 0x59dd837c, "nf_ipv6_ops" },
	{ 0xa29b7d3f, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0xb04d5db0, "nf_br_ops" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8251e2f1, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfd8dc1df, "br_handle_frame_finish" },
	{ 0xd879ab8, "register_net_sysctl" },
};

MODULE_INFO(depends, "bridge");


MODULE_INFO(srcversion, "DAFD6289AA46607810277D4");
