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
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb9371b6f, "spi_bitbang_stop" },
	{ 0x2d3e250, "parport_release" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x71c6c4d0, "spi_new_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2a47d179, "spi_bitbang_start" },
	{ 0x979ffaf2, "parport_claim" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,spi-bitbang");


MODULE_INFO(srcversion, "6B6D956F3957B566814E0AF");
