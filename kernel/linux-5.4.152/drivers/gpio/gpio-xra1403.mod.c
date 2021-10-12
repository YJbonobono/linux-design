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
	{ 0x815d7cab, "_dev_warn" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x1226ef6f, "gpiochip_is_requested" },
	{ 0xb177d101, "seq_printf" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cexar,xra1403");
MODULE_ALIAS("of:N*T*Cexar,xra1403C*");
MODULE_ALIAS("spi:xra1403");

MODULE_INFO(srcversion, "7870FFFAEB27DBA828EB9DD");
