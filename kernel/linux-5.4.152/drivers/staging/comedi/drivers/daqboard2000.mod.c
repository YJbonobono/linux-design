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
	{ 0xedcd990b, "comedi_pci_auto_unconfig" },
	{ 0x9b7bae96, "comedi_pci_driver_unregister" },
	{ 0xf9c8183d, "comedi_pci_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xcf87c652, "comedi_load_firmware" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7dff112a, "comedi_pci_detach" },
	{ 0xedc03953, "iounmap" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8255,comedi");

MODULE_ALIAS("pci:v00001616d00000409sv00001616sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001616d00000409sv00001616sd00000004bc*sc*i*");

MODULE_INFO(srcversion, "A54EAA07A1948CBE7EE9BD3");
