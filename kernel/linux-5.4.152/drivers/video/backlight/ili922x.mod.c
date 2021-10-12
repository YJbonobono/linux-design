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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x9d66df3b, "devm_lcd_device_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lcd");


MODULE_INFO(srcversion, "F3CD4C5790D8DEDEAAD23C7");
