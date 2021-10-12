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
	{ 0x942e31d7, "nf_ct_helper_init" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb9968c4d, "nf_ct_expect_init" },
	{ 0xaad7e5fc, "nf_conntrack_helpers_register" },
	{ 0xc5850110, "printk" },
	{ 0x94d9ccb0, "nf_ct_expect_put" },
	{ 0xede386a9, "nf_ct_expect_alloc" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0xb0efefdd, "nf_conntrack_helpers_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x367a46d0, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x2b75e98a, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "757F9B5866101B0DC3AE021");
