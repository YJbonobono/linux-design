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
	{ 0x8d338fac, "regulator_disable" },
	{ 0x6936b23f, "gnss_serial_free" },
	{ 0xcc3eff2e, "__serdev_device_driver_register" },
	{ 0xa19dceef, "gnss_serial_allocate" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xe39b7e5d, "gnss_serial_deregister" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1877807e, "gnss_serial_pm_ops" },
	{ 0x2889f367, "gnss_serial_register" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "gnss-serial");


MODULE_INFO(srcversion, "F1D1CD44D56010320ED93A6");
