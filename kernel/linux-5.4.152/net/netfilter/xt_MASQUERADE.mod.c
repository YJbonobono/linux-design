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
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0x962ac2cf, "xt_unregister_targets" },
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0x8bd53b5a, "xt_register_targets" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc8f8e243, "nf_nat_masquerade_ipv6" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd882f6a8, "nf_nat_masquerade_ipv4" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,x_tables,nf_conntrack");


MODULE_INFO(srcversion, "F05F9FF8FCBBC0110B8F849");
