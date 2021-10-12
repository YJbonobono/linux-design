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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11d771a, "ieee80211_queue_work" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xba55d23e, "crc7_be" },
	{ 0xfcf59bdb, "wl1251_free_hw" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x2292b333, "spi_setup" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x5dd395a7, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0xe8ee485d, "wl1251_alloc_hw" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "mac80211,crc7,wl1251");


MODULE_INFO(srcversion, "30C65F18F1365C8B761DE56");
