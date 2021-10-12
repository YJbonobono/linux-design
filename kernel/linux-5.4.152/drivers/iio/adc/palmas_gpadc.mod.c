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
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x29361773, "complete" },
	{ 0xaf7c85d8, "device_wakeup_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,palmas-gpadc");
MODULE_ALIAS("of:N*T*Cti,palmas-gpadcC*");

MODULE_INFO(srcversion, "F5CD8CCADD085477BFB97F9");
