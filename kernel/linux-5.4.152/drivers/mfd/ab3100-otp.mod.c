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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5418810, "abx500_get_register_page_interruptible" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4d47c2cc, "abx500_get_register_interruptible" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87a67f49, "single_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2DEC6D6DDEF4ADD2C7834EE");
