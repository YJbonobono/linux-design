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
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xaa770521, "nft_unregister_obj" },
	{ 0xcd80747d, "nft_register_obj" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4f259d65, "nf_ct_l4proto_find" },
	{ 0x4e6f46de, "nf_connlabels_replace" },
	{ 0x754d539c, "strlen" },
	{ 0x78381292, "init_net" },
	{ 0xd94cdc47, "nf_connlabels_put" },
	{ 0x564e10f2, "nf_connlabels_get" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0x3a5f8338, "nf_ct_get_id" },
	{ 0xe08a837, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x16a87d8a, "nf_ct_tmpl_alloc" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x520437a6, "nft_dump_register" },
	{ 0xae4777ff, "nf_conntrack_helper_try_module_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x222fdcd0, "nf_conntrack_helper_put" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb9968c4d, "nf_ct_expect_init" },
	{ 0xede386a9, "nf_ct_expect_alloc" },
	{ 0x1f245f63, "nf_ct_helper_ext_add" },
	{ 0x454659a7, "__nf_ct_refresh_acct" },
	{ 0x8865478c, "nf_ct_ext_add" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f4790bd, "nf_ct_untimeout" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "6DD51D1B73F397629B033C2");
