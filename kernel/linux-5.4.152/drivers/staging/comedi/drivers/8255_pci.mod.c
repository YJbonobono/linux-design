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
	{ 0x7dff112a, "comedi_pci_detach" },
	{ 0xedcd990b, "comedi_pci_auto_unconfig" },
	{ 0x9b7bae96, "comedi_pci_driver_unregister" },
	{ 0xf9c8183d, "comedi_pci_driver_register" },
	{ 0xedc03953, "iounmap" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0x5dbaf981, "subdev_8255_mm_init" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8255,comedi");

MODULE_ALIAS("pci:v0000144Ad00007224sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Ad00007248sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Ad00007296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Bsv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Bsv00001307sd0000000Bbc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00000160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000013C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00000400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000017D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A0DF1A22D077B0DC7C5109");
