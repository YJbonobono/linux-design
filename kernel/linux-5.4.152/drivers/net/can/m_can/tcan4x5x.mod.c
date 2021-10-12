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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xf7a543c1, "m_can_class_register" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0x2292b333, "spi_setup" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa6006961, "m_can_class_get_clocks" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe2b36f86, "m_can_class_allocate_dev" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x635fcbe, "m_can_class_unregister" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xb15e3078, "m_can_init_ram" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "m_can");

MODULE_ALIAS("spi:tcan4x5x");
MODULE_ALIAS("of:N*T*Cti,tcan4x5x");
MODULE_ALIAS("of:N*T*Cti,tcan4x5xC*");

MODULE_INFO(srcversion, "0F33DCB2C9FBBDB325F7A74");
