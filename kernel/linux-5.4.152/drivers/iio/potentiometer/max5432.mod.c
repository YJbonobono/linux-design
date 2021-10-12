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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmaxim,max5432");
MODULE_ALIAS("of:N*T*Cmaxim,max5432C*");
MODULE_ALIAS("of:N*T*Cmaxim,max5433");
MODULE_ALIAS("of:N*T*Cmaxim,max5433C*");
MODULE_ALIAS("of:N*T*Cmaxim,max5434");
MODULE_ALIAS("of:N*T*Cmaxim,max5434C*");
MODULE_ALIAS("of:N*T*Cmaxim,max5435");
MODULE_ALIAS("of:N*T*Cmaxim,max5435C*");

MODULE_INFO(srcversion, "84F609599A5271A636E2812");
