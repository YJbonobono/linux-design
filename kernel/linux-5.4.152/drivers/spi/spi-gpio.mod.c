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
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xeec8c0b7, "devm_spi_register_controller" },
	{ 0xb5a1233f, "spi_bitbang_init" },
	{ 0xac0ab899, "spi_bitbang_setup_transfer" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x393a2318, "__devm_spi_alloc_controller" },
	{ 0x18ee28a9, "spi_bitbang_setup" },
	{ 0xffc82ee3, "spi_bitbang_cleanup" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-bitbang");


MODULE_INFO(srcversion, "747188131144E9BF37085E2");
