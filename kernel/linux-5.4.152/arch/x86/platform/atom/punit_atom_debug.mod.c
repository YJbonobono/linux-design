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
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xb177d101, "seq_printf" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x87a67f49, "single_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*0083*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004A:feature:*0083*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004C:feature:*0083*");

MODULE_INFO(srcversion, "5B586FD44EAC0E29DDF467B");
