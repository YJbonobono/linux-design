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
	{ 0x2130e0d6, "cryptd_ahash_queued" },
	{ 0x5c845a46, "shash_ahash_digest" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9fead42e, "crypto_ahash_final" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0xe1506359, "cryptd_shash_desc" },
	{ 0x96317b23, "crypto_register_ahash" },
	{ 0xcedf68c6, "crypto_unregister_shash" },
	{ 0x296550c7, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x18d1fb87, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2306fc7a, "cryptd_ahash_child" },
	{ 0xfe2a62ab, "crypto_ahash_setkey" },
	{ 0x5cb473a7, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x676d0c2b, "cryptd_alloc_ahash" },
	{ 0x266dff3b, "cryptd_free_ahash" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "cryptd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "E0A5C143DA1C0BE9375FD6D");
