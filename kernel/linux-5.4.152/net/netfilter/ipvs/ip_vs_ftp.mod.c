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
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x8fba65ce, "ip_vs_conn_in_get" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3f668f, "ip_vs_conn_new" },
	{ 0xc3de5478, "ip_vs_nfct_expect_related" },
	{ 0x781b2332, "__nf_nat_mangle_tcp_packet" },
	{ 0x3cb78cc4, "ip_vs_conn_put" },
	{ 0x4ae6cc46, "ip_vs_tcp_conn_listen" },
	{ 0xa916b694, "strnlen" },
	{ 0x5cf59918, "ip_vs_conn_out_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xc5850110, "printk" },
	{ 0x4bb6968d, "register_ip_vs_app_inc" },
	{ 0xd468518d, "register_ip_vs_app" },
	{ 0xd9e00fc2, "unregister_ip_vs_app" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "4625A1061038DA4191556E9");
