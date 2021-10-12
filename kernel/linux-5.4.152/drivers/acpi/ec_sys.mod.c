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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xb4facf8b, "simple_open" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x1aee8382, "debugfs_create_bool" },
	{ 0xbfb9dc69, "debugfs_create_x32" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x2a14321e, "first_ec" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DAE1865CAE265448C8A4FA4");
