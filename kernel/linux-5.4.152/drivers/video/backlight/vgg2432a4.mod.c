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
	{ 0xf1455308, "ili9320_write_regs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x23a20c68, "ili9320_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x92541bc8, "ili9320_probe_spi" },
	{ 0x823e27aa, "ili9320_remove" },
	{ 0x45d1a6cb, "ili9320_shutdown" },
	{ 0x77e567d1, "ili9320_suspend" },
	{ 0x597de01e, "ili9320_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ili9320");


MODULE_INFO(srcversion, "0EB601BCEF7FAB463811D09");
