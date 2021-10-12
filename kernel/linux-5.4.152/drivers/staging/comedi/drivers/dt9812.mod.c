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
	{ 0x65a72234, "comedi_usb_auto_unconfig" },
	{ 0xe58761af, "comedi_usb_driver_unregister" },
	{ 0x84fb26ab, "comedi_usb_driver_register" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xbdbe75c6, "range_unipolar2_5" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x56375e25, "usb_reset_configuration" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x499a0656, "comedi_to_usb_dev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb8c2ee16, "comedi_readback_insn_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd3ef7a5e, "comedi_to_usb_interface" },
	{ 0xb1294d9e, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v0867p9812d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9A0976E5076502370D21FFB");
