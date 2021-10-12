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
	{ 0x157c66fa, "devm_clk_hw_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1efad18a, "wm831x_reg_lock" },
	{ 0x8d0b6bd9, "wm831x_reg_unlock" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0x3acfceab, "wm831x_set_bits" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3cb699f2, "wm831x_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0D2FB2C816B4A77EC1CE069");
