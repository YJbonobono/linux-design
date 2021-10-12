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
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x96848186, "scnprintf" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe7a35f04, "lm3533_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb0115721, "lm3533_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x77736c77, "lm3533_update" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,lm3533-core");


MODULE_INFO(srcversion, "D0032C3B2FF499D3A5226FB");
