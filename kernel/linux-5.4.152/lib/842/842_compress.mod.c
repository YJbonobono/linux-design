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
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x4df02057, "crc32_be" },
	{ 0x6b0782a0, "debugfs_create_atomic_t" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "40D4BDB8BB1BE6B083A5879");
