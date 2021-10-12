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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xb07343c0, "ipv6_find_hdr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "474965C5CCA1E45F0B13A40");
