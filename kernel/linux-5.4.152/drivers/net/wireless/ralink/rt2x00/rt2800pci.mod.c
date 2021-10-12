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
	{ 0xf43b34e1, "rt2x00mac_flush" },
	{ 0x7e3690ec, "rt2x00mac_rfkill_poll" },
	{ 0xa1d2e15, "rt2800_get_survey" },
	{ 0xadd52083, "rt2800_ampdu_action" },
	{ 0xd3623b74, "rt2800_get_tsf" },
	{ 0x3d16e2f2, "rt2800_conf_tx" },
	{ 0x81f269ca, "rt2800_sta_remove" },
	{ 0x4135683, "rt2800_sta_add" },
	{ 0x35b8ff21, "rt2800_set_rts_threshold" },
	{ 0x9bc15f1a, "rt2800_get_key_seq" },
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
	{ 0x2dcd551e, "rt2800mmio_get_dma_done" },
	{ 0xf6ee6088, "rt2800mmio_get_txwi" },
	{ 0x32bc6fdc, "rt2800mmio_init_registers" },
	{ 0x35aaf20c, "rt2x00mmio_regbusy_read" },
	{ 0x7b842ca7, "rt2800_pre_reset_hw" },
	{ 0xbe04a2f8, "rt2800_config" },
	{ 0xd9daf2a6, "rt2800_config_ant" },
	{ 0xad628b1c, "rt2800_config_erp" },
	{ 0x82ceca3c, "rt2800_config_intf" },
	{ 0xb3a49d0f, "rt2800_config_filter" },
	{ 0x712ee783, "rt2800_config_pairwise_key" },
	{ 0xee55dae2, "rt2800_config_shared_key" },
	{ 0xddb88f08, "rt2800mmio_fill_rxdone" },
	{ 0xa2cf0a75, "rt2800_clear_beacon" },
	{ 0xd2eabff7, "rt2800_write_beacon" },
	{ 0x9b6581, "rt2800_write_tx_data" },
	{ 0x81bfff0c, "rt2800mmio_write_tx_desc" },
	{ 0x15fad47e, "rt2800mmio_flush_queue" },
	{ 0x8dcba824, "rt2800mmio_stop_queue" },
	{ 0xf9a8f979, "rt2800mmio_kick_queue" },
	{ 0xbe60422d, "rt2800mmio_start_queue" },
	{ 0x4c7485df, "rt2800_watchdog" },
	{ 0xc330db0b, "rt2800_vco_calibration" },
	{ 0x230abf28, "rt2800_gain_calibration" },
	{ 0x5032f2a, "rt2800_link_tuner" },
	{ 0x6501c1f9, "rt2800_reset_tuner" },
	{ 0x96f728b6, "rt2800_link_stats" },
	{ 0x9828e12d, "rt2800_rfkill_poll" },
	{ 0x9cfb87b5, "rt2800mmio_clear_entry" },
	{ 0xee940298, "rt2800mmio_get_entry_state" },
	{ 0xfb76d34c, "rt2x00mmio_uninitialize" },
	{ 0xd3a7ae99, "rt2x00mmio_initialize" },
	{ 0xffb2e2e1, "rt2800_load_firmware" },
	{ 0xbd983b5c, "rt2800_check_firmware" },
	{ 0xefd92fc0, "rt2800mmio_probe_hw" },
	{ 0xc6a1455e, "rt2800mmio_autowake_tasklet" },
	{ 0x92c0bcd1, "rt2800mmio_rxdone_tasklet" },
	{ 0x2505789d, "rt2800mmio_tbtt_tasklet" },
	{ 0xfad1430, "rt2800mmio_pretbtt_tasklet" },
	{ 0xe28f94c7, "rt2800mmio_txstatus_tasklet" },
	{ 0x5fa4db64, "rt2800mmio_interrupt" },
	{ 0x949f64b4, "rt2800mmio_queue_init" },
	{ 0xc788b72c, "rt2x00pci_resume" },
	{ 0xaf163cd6, "rt2x00pci_suspend" },
	{ 0x8d786756, "rt2x00pci_remove" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x63ec873c, "rt2800mmio_toggle_irq" },
	{ 0x3c15fdf8, "rt2800mmio_enable_radio" },
	{ 0xa8466ea3, "rt2800_mcu_request" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x84888d0d, "rt2800_read_eeprom_efuse" },
	{ 0x361f6ebe, "rt2800_efuse_detect" },
	{ 0xb249a752, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F308CBBB92C7269AB6539DE");
