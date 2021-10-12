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
	{ 0x5735b416, "pinctrl_enable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x6e31b729, "devm_pinctrl_register_and_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x21cf72e0, "pinctrl_dev_get_drvdata" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7ad1ded1, "pinctrl_register_mappings" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB559F35AA4FC9A37F43107");
