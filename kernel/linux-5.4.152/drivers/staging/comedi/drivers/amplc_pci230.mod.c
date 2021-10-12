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
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3641d3c6, "comedi_nsamples_left" },
	{ 0xdbbb72bf, "comedi_8254_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xee475a1a, "comedi_8254_set_mode" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83f5fe41, "comedi_buf_read_samples" },
	{ 0x6a8d9845, "comedi_nscans_left" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8254,comedi_8255");

MODULE_ALIAS("pci:v000014DCd00000000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDB50338E657AC28636280B");
