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
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x202a7116, "labpc_drain_dma" },
	{ 0x1fb12306, "comedi_8254_cascade_ns_to_timer" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0x7967a38f, "comedi_8254_load" },
	{ 0x288e5cf0, "comedi_timeout" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xee475a1a, "comedi_8254_set_mode" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0xcae88682, "labpc_setup_dma" },
	{ 0x737aada2, "comedi_8254_update_divisors" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc89cdf07, "labpc_handle_dma_status" },
	{ 0x5dbaf981, "subdev_8255_mm_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdbbb72bf, "comedi_8254_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a1c211e, "comedi_8254_mm_init" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xec797760, "comedi_alloc_subdevices" },
};

MODULE_INFO(depends, "comedi,ni_labpc_isadma,comedi_8254,comedi_8255");


MODULE_INFO(srcversion, "CE3196CE7BE4B35EB688A89");
