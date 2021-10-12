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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x6e89a560, "regmap_irq_chip_get_base" },
	{ 0x9ee3af0f, "regmap_add_irq_chip" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:da9061");
MODULE_ALIAS("i2c:da9062");
MODULE_ALIAS("of:N*T*Cdlg,da9061");
MODULE_ALIAS("of:N*T*Cdlg,da9061C*");
MODULE_ALIAS("of:N*T*Cdlg,da9062");
MODULE_ALIAS("of:N*T*Cdlg,da9062C*");

MODULE_INFO(srcversion, "9B0FEF91F429492B840B6A0");
