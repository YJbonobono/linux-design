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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x1fb12306, "comedi_8254_cascade_ns_to_timer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaa9cce56, "comedi_8254_set_busy" },
	{ 0x8ffb571, "comedi_8254_subdevice_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x737aada2, "comedi_8254_update_divisors" },
	{ 0xce92c066, "comedi_8254_pacer_enable" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8254");

MODULE_ALIAS("pci:v000013FEd00001710sv000010B5sd00009050bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd00000000bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B100bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B200bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C100bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C200bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv00001000sd0000D100bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd00000002bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B102bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B202bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C102bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C202bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv00001000sd0000D102bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001731sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D1E891756142DEA617A5DD");
