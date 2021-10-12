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
	{ 0x19882013, "comedi_set_spriv_auto_free" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x593997a3, "comedi_alloc_spriv" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5c6308fe, "comedi_8254_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8ffb571, "comedi_8254_subdevice_init" },
	{ 0x8a1c211e, "comedi_8254_mm_init" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xff73f159, "comedi_dio_insn_config" },
};

MODULE_INFO(depends, "comedi,comedi_8254");


MODULE_INFO(srcversion, "E845F22D29044858C414369");
