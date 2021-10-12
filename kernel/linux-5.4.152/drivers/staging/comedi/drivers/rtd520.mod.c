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
	{ 0xc1514a3b, "free_irq" },
	{ 0xd340e1b7, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8ffb571, "comedi_8254_subdevice_init" },
	{ 0x8a1c211e, "comedi_8254_mm_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0xff73f159, "comedi_dio_insn_config" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8254,comedi");

MODULE_ALIAS("pci:v00001435d00007520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001435d00004520sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7CC60684A33AF3C843433D6");
