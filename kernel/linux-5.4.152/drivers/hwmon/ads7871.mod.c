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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0x2292b333, "spi_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "73C7AA06F73B2AFE4383AAE");
