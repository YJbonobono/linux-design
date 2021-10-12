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
	{ 0x279e4ccc, "comedi_pcmcia_disable" },
	{ 0xb687d40a, "comedi_pcmcia_auto_unconfig" },
	{ 0x56a6e0c9, "comedi_pcmcia_driver_unregister" },
	{ 0xbf43d3f8, "comedi_pcmcia_driver_register" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0x49c29289, "comedi_pcmcia_enable" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x8bbcc280, "comedi_to_pcmcia_dev" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xe6eaa103, "comedi_pcmcia_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pcmcia,comedi,pcmcia");

MODULE_ALIAS("pcmcia:m0137c0027f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "E05BF286CE7A81CC7FB973F");
