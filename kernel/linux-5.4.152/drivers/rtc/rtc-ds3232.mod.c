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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2292b333, "spi_setup" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1bee3826, "rtc_nvmem_register" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "0C4A63875213CDA8BDEC6BF");
