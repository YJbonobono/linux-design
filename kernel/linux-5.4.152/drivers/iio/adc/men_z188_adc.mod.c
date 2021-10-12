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
	{ 0x22517c8e, "mcb_unregister_driver" },
	{ 0x108e2f2e, "__mcb_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x24f15481, "mcb_request_mem" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0xedc03953, "iounmap" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb,industrialio");


MODULE_INFO(srcversion, "94F8B672AE175C939EDD1BD");
