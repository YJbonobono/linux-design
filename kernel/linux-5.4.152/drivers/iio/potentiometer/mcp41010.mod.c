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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:mcp41010");
MODULE_ALIAS("spi:mcp41050");
MODULE_ALIAS("spi:mcp41100");
MODULE_ALIAS("spi:mcp42010");
MODULE_ALIAS("spi:mcp42050");
MODULE_ALIAS("spi:mcp42100");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41010");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41010C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41050");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41050C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41100");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41100C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42010");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42010C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42050");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42050C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42100");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42100C*");

MODULE_INFO(srcversion, "49FC8FED210875811F5C9FA");
