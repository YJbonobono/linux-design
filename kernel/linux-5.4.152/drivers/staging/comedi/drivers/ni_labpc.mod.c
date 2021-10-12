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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf0a4b117, "comedi_driver_unregister" },
	{ 0x8d87ef08, "comedi_driver_register" },
	{ 0xd27d74cb, "labpc_init_dma_chan" },
	{ 0x867a66bc, "labpc_common_attach" },
	{ 0x18f8393b, "comedi_request_region" },
	{ 0x5fcbf997, "comedi_legacy_detach" },
	{ 0x5bc883f, "labpc_common_detach" },
	{ 0xdcfda651, "labpc_free_dma_chan" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,ni_labpc_isadma,ni_labpc_common");


MODULE_INFO(srcversion, "84C4BB1D512FDAD7F79C739");
