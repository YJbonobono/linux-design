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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x33387e40, "regmap_get_device" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xe7792155, "is_acpi_device_node" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "D9DD809574246BA0694731A");
