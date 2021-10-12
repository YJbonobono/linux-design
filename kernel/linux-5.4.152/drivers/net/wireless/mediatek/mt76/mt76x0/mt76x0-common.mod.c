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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xcdfeb538, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x33e1eaca, "mt76x02_phy_set_txdac" },
	{ 0x3f2dbfa3, "__mt76_poll" },
	{ 0xf17c2d4e, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x22605b33, "mt76x02_phy_set_txpower" },
	{ 0x5e51500c, "mt76x02_mcu_function_select" },
	{ 0x9cd51672, "mt76x02_mcu_calibrate" },
	{ 0x8131f9b0, "mt76x02_eeprom_copy" },
	{ 0xb5dc962, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x77b67640, "mt76x02_dfs_init_params" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x27b1c769, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x917437ed, "mt76x02_init_agc_gain" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3b0dfa36, "mt76x02_init_debugfs" },
	{ 0xdc648155, "mt76x02_get_lna_gain" },
	{ 0xf208b16e, "mt76x02_edcca_init" },
	{ 0x45629a5d, "mt76x02_phy_set_rxpath" },
	{ 0xd83d7474, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0x18229701, "__mt76_poll_msec" },
	{ 0xe6fe376e, "mt76x02_init_device" },
	{ 0xebd5814e, "mt76_set_channel" },
	{ 0x3c544593, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2724b7f3, "mt76x02_phy_set_bw" },
	{ 0xcbf238a2, "mt76_register_device" },
	{ 0xaddc8e2, "mt76x02_mac_setaddr" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8c5dbb30, "mt76_eeprom_init" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x54381b8c, "mt76x02_get_rx_gain" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa59b507b, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dcb201a, "mt76x02_ext_pa_enabled" },
	{ 0x40d2cff5, "mt76x02_mac_shared_key_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7161020, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x5a600160, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "D04847EA286BBB0116F886A");
