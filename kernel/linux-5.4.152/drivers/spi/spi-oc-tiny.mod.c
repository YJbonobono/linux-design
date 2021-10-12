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
	{ 0x29361773, "complete" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2a47d179, "spi_bitbang_start" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xb9371b6f, "spi_bitbang_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-bitbang");


MODULE_INFO(srcversion, "7265B217EEE8C0240D1189A");
