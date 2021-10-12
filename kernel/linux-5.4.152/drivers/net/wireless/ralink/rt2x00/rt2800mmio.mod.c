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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x6d42a552, "rt2800_disable_wpdma" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb829ecc2, "rt2x00lib_beacondone" },
	{ 0x96051861, "rt2800_txdone" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xbe04a2f8, "rt2800_config" },
	{ 0xa946facd, "rt2800_get_txwi_rxwi_size" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5453dc7f, "rt2x00lib_pretbtt" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xf58bf7e8, "rt2800_wait_wpdma_ready" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x640d8baa, "rt2800_process_rxwi" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdf8f877d, "rt2800_txdone_nostatus" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3b894aef, "rt2800_probe_hw" },
	{ 0xcedbfac4, "rt2800_txstatus_timeout" },
	{ 0x99c91bb9, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69a266d2, "rt2x00mmio_rxdone" },
	{ 0x3ae3faf2, "rt2800_txstatus_pending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb15d00c2, "rt2800_enable_radio" },
};

MODULE_INFO(depends, "rt2800lib,rt2x00lib,rt2x00mmio");


MODULE_INFO(srcversion, "430155D20F4C0B7023DE2F7");
