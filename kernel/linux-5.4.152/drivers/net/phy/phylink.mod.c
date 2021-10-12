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
	{ 0x129334ae, "sfp_parse_support" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x26c98144, "sfp_register_upstream" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x538d073d, "phy_duplex_to_str" },
	{ 0x46599119, "phy_stop" },
	{ 0x9eb0b539, "phy_attach_direct" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0x74c13f64, "phy_ethtool_ksettings_set" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xaffbbaa8, "phy_ethtool_ksettings_get" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x36e03f58, "phy_ethtool_get_wol" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x8ba0b748, "phy_ethtool_get_eee" },
	{ 0x1304e4e7, "phy_set_asym_pause" },
	{ 0xf8e85748, "fwnode_get_named_child_node" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x9130787b, "sfp_unregister_upstream" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x608bab1f, "sfp_select_interface" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xccf52bc9, "sfp_upstream_start" },
	{ 0x8a49eb54, "fwnode_get_named_gpiod" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x8a62b81b, "sfp_upstream_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x60eeacfe, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe16073, "phy_detach" },
	{ 0xa8629c87, "phy_init_eee" },
	{ 0x6f04d7b5, "phy_request_interrupt" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x6209f49, "phy_lookup_setting" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x451ba912, "phy_get_eee_err" },
	{ 0xe4b818c3, "phy_speed_to_str" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4031b7f, "sfp_parse_port" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x54f47f5e, "fwnode_property_get_reference_args" },
	{ 0x43df2fa3, "phy_ethtool_set_wol" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x422dad30, "phy_ethtool_set_eee" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0x12bb45a7, "phy_restart_aneg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "69F629E54E0E0D9525C6F23");
