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
	{ 0x8ffb571, "comedi_8254_subdevice_init" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8254,comedi_8255,comedi");

MODULE_ALIAS("pci:v000013FEd00001730sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001733sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001734sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001735sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001736sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001739sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001753sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001754sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001756sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001761sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001762sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C2764156C1D02B1A50887D9");
