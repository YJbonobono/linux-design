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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cimg,boston-lcd");
MODULE_ALIAS("of:N*T*Cimg,boston-lcdC*");
MODULE_ALIAS("of:N*T*Cmti,malta-lcd");
MODULE_ALIAS("of:N*T*Cmti,malta-lcdC*");
MODULE_ALIAS("of:N*T*Cmti,sead3-lcd");
MODULE_ALIAS("of:N*T*Cmti,sead3-lcdC*");

MODULE_INFO(srcversion, "25388FEE9D0E6AA73CE23FD");
