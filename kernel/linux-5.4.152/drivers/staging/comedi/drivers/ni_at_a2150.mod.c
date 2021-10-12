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
	{ 0xc1514a3b, "free_irq" },
	{ 0x316d5f4b, "comedi_isadma_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0x18f8393b, "comedi_request_region" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7967a38f, "comedi_8254_load" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0x5fcbf997, "comedi_legacy_detach" },
	{ 0x73ca19bf, "comedi_isadma_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_isadma,comedi_8254");


MODULE_INFO(srcversion, "B073AC92AC98E6DD664640D");
