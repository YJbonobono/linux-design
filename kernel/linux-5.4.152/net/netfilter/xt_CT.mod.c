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
	{ 0xb07634c6, "xt_unregister_target" },
	{ 0x8bd53b5a, "xt_register_targets" },
	{ 0x875ff07a, "xt_register_target" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x85d3aa48, "nf_ct_set_timeout" },
	{ 0x4f259d65, "nf_ct_l4proto_find" },
	{ 0x1f245f63, "nf_ct_helper_ext_add" },
	{ 0xae4777ff, "nf_conntrack_helper_try_module_get" },
	{ 0xa916b694, "strnlen" },
	{ 0x8865478c, "nf_ct_ext_add" },
	{ 0xc75d5660, "nf_ct_tmpl_free" },
	{ 0x16a87d8a, "nf_ct_tmpl_alloc" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2aa52d44, "nf_ct_destroy_timeout" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0x222fdcd0, "nf_conntrack_helper_put" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "7D4AFAF6904113AA04ED85D");
