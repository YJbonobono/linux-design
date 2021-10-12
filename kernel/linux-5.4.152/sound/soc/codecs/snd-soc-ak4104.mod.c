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
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x2292b333, "spi_setup" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("spi:ak4104");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4104");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4104C*");

MODULE_INFO(srcversion, "CFE346E5816B3CEE116AD9F");
