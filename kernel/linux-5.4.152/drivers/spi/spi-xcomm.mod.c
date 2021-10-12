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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x5f787440, "spi_finalize_current_message" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xeec8c0b7, "devm_spi_register_controller" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:spi-xcomm");

MODULE_INFO(srcversion, "6264035286FD922AF903CD9");
