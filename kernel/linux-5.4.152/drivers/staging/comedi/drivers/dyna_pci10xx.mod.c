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
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x8113872c, "range_unipolar10" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x7dff112a, "comedi_pci_detach" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v000010B5d00001050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "95DF75E00B454AB47DFD6F0");
