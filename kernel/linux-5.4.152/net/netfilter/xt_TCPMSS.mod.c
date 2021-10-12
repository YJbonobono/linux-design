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
	{ 0x962ac2cf, "xt_unregister_targets" },
	{ 0x8bd53b5a, "xt_register_targets" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb0704523, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb7d203b5, "nf_route" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xd4452a9b, "inet_proto_csum_replace4" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "A7D727BC28D99608B33F6BC");
