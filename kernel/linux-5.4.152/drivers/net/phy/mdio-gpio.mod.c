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
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x4165f342, "alloc_mdio_bitbang" },
	{ 0x688b1b9e, "devm_gpiod_get_index_optional" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0x82d8747d, "free_mdio_bitbang" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mdio-bitbang");

MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpio");
MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpioC*");

MODULE_INFO(srcversion, "C655288A20CBC671EFF277C");
