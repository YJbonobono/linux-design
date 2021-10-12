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
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x9539023c, "simple_attr_read" },
	{ 0xc5850110, "printk" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x4dade965, "simple_attr_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0AFFA6CE11953C4313137F7");
