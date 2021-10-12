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
	{ 0xcdfeb538, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x22605b33, "mt76x02_phy_set_txpower" },
	{ 0x9cd51672, "mt76x02_mcu_calibrate" },
	{ 0x8131f9b0, "mt76x02_eeprom_copy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdc648155, "mt76x02_get_lna_gain" },
	{ 0xa25322ec, "mt76_eeprom_override" },
	{ 0xd83d7474, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8c5dbb30, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x54381b8c, "mt76x02_get_rx_gain" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa59b507b, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dcb201a, "mt76x02_ext_pa_enabled" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x7161020, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x5a600160, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "91924EBDDD2AC31A6CA8189");
