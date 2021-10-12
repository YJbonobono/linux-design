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
	{ 0x68ff380c, "amplc_dio200_common_attach" },
	{ 0x197395a2, "amplc_dio200_set_enhance" },
	{ 0xedc03953, "iounmap" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,amplc_dio200_common");

MODULE_ALIAS("pci:v000014DCd0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000014sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5E36431195A9EF1CDAB1593");
