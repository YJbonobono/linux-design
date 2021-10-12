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
	{ 0xcab3c35f, "_dev_info" },
	{ 0xeec8c0b7, "devm_spi_register_controller" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0xee3b4fd8, "spi_finalize_current_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1DC6E5F11F48E861A04679E");
