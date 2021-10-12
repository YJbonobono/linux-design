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
	{ 0x5fcbf997, "comedi_legacy_detach" },
	{ 0xf0a4b117, "comedi_driver_unregister" },
	{ 0x8d87ef08, "comedi_driver_register" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x21102f87, "range_0_32mA" },
	{ 0x4236eaaf, "range_4_20mA" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x18f8393b, "comedi_request_region" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "D2AF03E7E872BCBAEFAC0C5");
