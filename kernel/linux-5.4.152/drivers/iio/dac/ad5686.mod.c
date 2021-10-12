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
	{ 0x8d338fac, "regulator_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x2178290e, "iio_enum_write" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5afa1383, "iio_enum_available_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31aad9b7, "iio_enum_read" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "4C732B4B473A92C3ABCC4D5");
