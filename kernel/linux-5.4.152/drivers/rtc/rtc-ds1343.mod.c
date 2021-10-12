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
	{ 0x5b870141, "dev_pm_set_wake_irq" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x1bee3826, "rtc_nvmem_register" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x2292b333, "spi_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x67135538, "dev_pm_clear_wake_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ds1343");
MODULE_ALIAS("spi:ds1344");

MODULE_INFO(srcversion, "AB1A8A7627FCF702AC72682");
