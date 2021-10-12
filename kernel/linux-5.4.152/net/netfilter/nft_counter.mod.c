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
	{ 0xa616e404, "nft_register_expr" },
	{ 0xcd80747d, "nft_register_obj" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "C0C0B695F7461C3A5C64DB8");
