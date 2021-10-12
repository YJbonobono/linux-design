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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x366aa4af, "ade7854_probe" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ade7854,industrialio");

MODULE_ALIAS("spi:ade7854");
MODULE_ALIAS("spi:ade7858");
MODULE_ALIAS("spi:ade7868");
MODULE_ALIAS("spi:ade7878");

MODULE_INFO(srcversion, "515A5C55F813AAD88193A15");
