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
	{ 0x593997a3, "comedi_alloc_spriv" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x3e4cd00, "__comedi_request_region" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x316d5f4b, "comedi_isadma_alloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0x18f8393b, "comedi_request_region" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x4a17474e, "comedi_isadma_disable_on_sample" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce92c066, "comedi_8254_pacer_enable" },
	{ 0x737aada2, "comedi_8254_update_divisors" },
	{ 0x1fb12306, "comedi_8254_cascade_ns_to_timer" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0x3641d3c6, "comedi_nsamples_left" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x5fcbf997, "comedi_legacy_detach" },
	{ 0x73ca19bf, "comedi_isadma_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_8255,comedi_isadma,comedi_8254");


MODULE_INFO(srcversion, "EFED24955BF2A6E26581EDC");
