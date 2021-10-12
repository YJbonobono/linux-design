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
	{ 0xf0a4b117, "comedi_driver_unregister" },
	{ 0x8d87ef08, "comedi_driver_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0x737aada2, "comedi_8254_update_divisors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0x3641d3c6, "comedi_nsamples_left" },
	{ 0x1fb12306, "comedi_8254_cascade_ns_to_timer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fe634f3, "range_bipolar2_5" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x8113872c, "range_unipolar10" },
	{ 0x316d5f4b, "comedi_isadma_alloc" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xcd330f4, "range_unknown" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0x18f8393b, "comedi_request_region" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x5fcbf997, "comedi_legacy_detach" },
	{ 0x73ca19bf, "comedi_isadma_free" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xce92c066, "comedi_8254_pacer_enable" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_8254,comedi_isadma");


MODULE_INFO(srcversion, "AE3F0855470991B5789FAD9");
