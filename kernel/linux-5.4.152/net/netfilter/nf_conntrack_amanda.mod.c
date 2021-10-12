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
	{ 0x454659a7, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb9968c4d, "nf_ct_expect_init" },
	{ 0x2eb26c6, "textsearch_prepare" },
	{ 0xaad7e5fc, "nf_conntrack_helpers_register" },
	{ 0x54e05bb4, "skb_find_text" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x94d9ccb0, "nf_ct_expect_put" },
	{ 0xede386a9, "nf_ct_expect_alloc" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0xb0efefdd, "nf_conntrack_helpers_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x367a46d0, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8ed6d396, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x2b75e98a, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A89D4B0A487F3A07F03BA33");
