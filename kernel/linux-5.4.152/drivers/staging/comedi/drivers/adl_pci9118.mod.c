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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x737aada2, "comedi_8254_update_divisors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3a5d0f26, "comedi_set_hw_dev" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x7dff112a, "comedi_pci_detach" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xb2493839, "comedi_pci_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xc959f90d, "comedi_to_pci_dev" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0x3641d3c6, "comedi_nsamples_left" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fb12306, "comedi_8254_cascade_ns_to_timer" },
	{ 0xce92c066, "comedi_8254_pacer_enable" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x7967a38f, "comedi_8254_load" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0x27607831, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8254,comedi");

MODULE_ALIAS("pci:v000010E8d000080D9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8CB119DC9EE5F34ED81F922");
