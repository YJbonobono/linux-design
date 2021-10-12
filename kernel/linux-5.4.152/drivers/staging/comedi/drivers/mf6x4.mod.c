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
	{ 0x7dff112a, "comedi_pci_detach" },
	{ 0xedc03953, "iounmap" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v0000186Cd00000634sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000186Cd00000624sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A12F7E56783AB19D34861E3");
