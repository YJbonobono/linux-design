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
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4452a9b, "inet_proto_csum_replace4" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "61BECE30715F73D4778A1FF");
