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
	{ 0xf49e85a0, "ksz_port_bridge_join" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xbf6526eb, "ksz_port_vlan_prepare" },
	{ 0xaf1271e4, "ksz_get_ethtool_stats" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfc4c5ef4, "ksz_init_mib_timer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x9b5c5f1, "ksz_switch_register" },
	{ 0xd84c31ee, "ksz_port_bridge_leave" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bc9a9db, "phy_remove_link_mode" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x67e14696, "ksz_update_port_member" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x97f6fc26, "ksz_adjust_link" },
	{ 0xa32e95fe, "ksz_port_mdb_prepare" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x635ec92a, "ksz_port_fast_age" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfd3ab291, "ksz_disable_port" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4a83de79, "ksz_enable_port" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xd3a19c74, "ksz_sset_count" },
};

MODULE_INFO(depends, "ksz_common");


MODULE_INFO(srcversion, "6B831FE661CE8803367C31D");
