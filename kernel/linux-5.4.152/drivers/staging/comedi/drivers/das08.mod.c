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
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ffb571, "comedi_8254_subdevice_init" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0xec797760, "comedi_alloc_subdevices" },
};

MODULE_INFO(depends, "comedi,comedi_8254,comedi_8255");


MODULE_INFO(srcversion, "313578986B5B1FA98FEF863");
