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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xdf4b72f1, "rt2x00mac_tx_frames_pending" },
	{ 0x16a88f4b, "rt2x00mac_get_ringparam" },
	{ 0x8ee34296, "rt2x00mac_get_antenna" },
	{ 0x30cea0ce, "rt2x00mac_set_antenna" },
	{ 0xf43b34e1, "rt2x00mac_flush" },
	{ 0x7e3690ec, "rt2x00mac_rfkill_poll" },
	{ 0x9e31fcd6, "rt2x00mac_get_stats" },
	{ 0x38fc7bac, "rt2x00mac_sw_scan_complete" },
	{ 0x2cabd75d, "rt2x00mac_sw_scan_start" },
	{ 0x5b8fd86d, "rt2x00mac_set_key" },
	{ 0xc68bcf91, "rt2x00mac_configure_filter" },
	{ 0xa9dde37b, "rt2x00mac_bss_info_changed" },
	{ 0x38c7ea7d, "rt2x00mac_config" },
	{ 0x76587cdf, "rt2x00mac_remove_interface" },
	{ 0x93b2745f, "rt2x00mac_add_interface" },
	{ 0x26066346, "rt2x00mac_stop" },
	{ 0x44e1911, "rt2x00mac_start" },
	{ 0x8382022a, "rt2x00mac_tx" },
	{ 0x57bac5aa, "rt2x00mmio_flush_queue" },
	{ 0xfb76d34c, "rt2x00mmio_uninitialize" },
	{ 0xd3a7ae99, "rt2x00mmio_initialize" },
	{ 0xc788b72c, "rt2x00pci_resume" },
	{ 0xaf163cd6, "rt2x00pci_suspend" },
	{ 0x8d786756, "rt2x00pci_remove" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x69a266d2, "rt2x00mmio_rxdone" },
	{ 0xb829ecc2, "rt2x00lib_beacondone" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9a8b0608, "rt2x00lib_txdone" },
	{ 0x99c91bb9, "rt2x00queue_get_entry" },
	{ 0xcddd8df5, "rt2x00lib_txdone_noinfo" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa37c3bd6, "rt2x00lib_set_mac_address" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xd819a524, "crc_itu_t_table" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x35aaf20c, "rt2x00mmio_regbusy_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4539c5e5, "rt2x00mac_conf_tx" },
	{ 0xb249a752, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6,crc-itu-t");

MODULE_ALIAS("pci:v00001814d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000401sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E07CB721F5444139C61A6F2");
