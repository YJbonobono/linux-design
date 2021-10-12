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
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2292b333, "spi_setup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chimax,hx8357");
MODULE_ALIAS("of:N*T*Chimax,hx8357C*");
MODULE_ALIAS("of:N*T*Chimax,hx8369");
MODULE_ALIAS("of:N*T*Chimax,hx8369C*");

MODULE_INFO(srcversion, "729E741A519B4DE4356FD11");
