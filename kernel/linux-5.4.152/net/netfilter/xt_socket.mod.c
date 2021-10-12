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
	{ 0x4553243b, "xt_unregister_matches" },
	{ 0xdbad52b, "xt_register_matches" },
	{ 0x6e228847, "nf_sk_lookup_slow_v4" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdb046f59, "nf_defrag_ipv6_enable" },
	{ 0xa3fc8437, "nf_defrag_ipv4_enable" },
	{ 0x34d1fcca, "sock_gen_put" },
	{ 0xe945292e, "nf_sk_lookup_slow_v6" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_socket_ipv4,nf_defrag_ipv6,nf_defrag_ipv4,nf_socket_ipv6");


MODULE_INFO(srcversion, "737B54582F44E4F3FF50FAC");
