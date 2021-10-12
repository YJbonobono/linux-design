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
	{ 0x810eaa73, "xt_unregister_match" },
	{ 0x962ac2cf, "xt_unregister_targets" },
	{ 0xaaa003a2, "xt_register_match" },
	{ 0x8bd53b5a, "xt_register_targets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "12FDDB55EABC8047CDB0C4F");
