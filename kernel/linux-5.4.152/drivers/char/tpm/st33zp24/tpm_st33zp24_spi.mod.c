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
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x53b106e3, "st33zp24_probe" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8aae094c, "st33zp24_pm_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x50dc87b1, "st33zp24_remove" },
	{ 0xb7112880, "st33zp24_pm_resume" },
};

MODULE_INFO(depends, "tpm_st33zp24");

MODULE_ALIAS("of:N*T*Cst,st33zp24-spi");
MODULE_ALIAS("of:N*T*Cst,st33zp24-spiC*");
MODULE_ALIAS("spi:st33zp24-spi");
MODULE_ALIAS("acpi*:SMO3324:*");

MODULE_INFO(srcversion, "3C0DEA86FB13AE6BD2BB592");
