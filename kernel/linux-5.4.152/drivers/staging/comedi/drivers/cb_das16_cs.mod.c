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
	{ 0x279e4ccc, "comedi_pcmcia_disable" },
	{ 0xb687d40a, "comedi_pcmcia_auto_unconfig" },
	{ 0x56a6e0c9, "comedi_pcmcia_driver_unregister" },
	{ 0xbf43d3f8, "comedi_pcmcia_driver_register" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xff73f159, "comedi_dio_insn_config" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xaa9cce56, "comedi_8254_set_busy" },
	{ 0x8ffb571, "comedi_8254_subdevice_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x49c29289, "comedi_pcmcia_enable" },
	{ 0x8bbcc280, "comedi_to_pcmcia_dev" },
	{ 0xe6eaa103, "comedi_pcmcia_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pcmcia,comedi,comedi_8254");

MODULE_ALIAS("pcmcia:m01C5c0039f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01C5c4009f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "65BB69290A98796C5BC0219");
