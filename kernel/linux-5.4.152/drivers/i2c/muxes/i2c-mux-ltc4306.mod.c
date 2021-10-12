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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x272c5d5a, "i2c_mux_add_adapter" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x33387e40, "regmap_get_device" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x9e6b178e, "i2c_mux_alloc" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xd741e51f, "i2c_match_id" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x5e108ee9, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Clltc,ltc4305");
MODULE_ALIAS("of:N*T*Clltc,ltc4305C*");
MODULE_ALIAS("of:N*T*Clltc,ltc4306");
MODULE_ALIAS("of:N*T*Clltc,ltc4306C*");
MODULE_ALIAS("i2c:ltc4305");
MODULE_ALIAS("i2c:ltc4306");

MODULE_INFO(srcversion, "9858DE9A41FD8F55F27C7D5");
