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
	{ 0xe4f191f2, "dev_add_offload" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x942c316b, "dev_remove_offload" },
	{ 0x581cf443, "skb_push" },
	{ 0x1b346ef, "skb_mac_gso_segment" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4F6C8CC2CE322FCF066423");
