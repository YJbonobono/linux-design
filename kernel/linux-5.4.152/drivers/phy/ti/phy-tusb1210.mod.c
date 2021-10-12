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
	{ 0xa7f834ea, "ulpi_unregister_driver" },
	{ 0xb5c2e79a, "__ulpi_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x996adfae, "phy_create_lookup" },
	{ 0xda2a91a4, "phy_create" },
	{ 0xcbd4e7f, "device_property_read_u8_array" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9ae40aab, "phy_destroy" },
	{ 0x418c1954, "phy_remove_lookup" },
	{ 0xcc450a59, "ulpi_read" },
	{ 0x2cb5acf8, "ulpi_write" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("ulpi:v0451p1507");
MODULE_ALIAS("ulpi:v0451p1508");

MODULE_INFO(srcversion, "43DBFC02588A51CA77ABD15");
