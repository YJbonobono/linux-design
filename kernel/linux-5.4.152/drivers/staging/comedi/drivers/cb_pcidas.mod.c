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
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x83f5fe41, "comedi_buf_read_samples" },
	{ 0x3641d3c6, "comedi_nsamples_left" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fb12306, "comedi_8254_cascade_ns_to_timer" },
	{ 0x7dff112a, "comedi_pci_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xce92c066, "comedi_8254_pacer_enable" },
	{ 0x737aada2, "comedi_8254_update_divisors" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8255,comedi_8254");

MODULE_ALIAS("pci:v00001307d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "72310C88A3AECDC5A6157D4");
