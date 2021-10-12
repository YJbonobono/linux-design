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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xe296672d, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xaeb5a933, "mii_check_link" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x870b53e9, "eeprom_93cx6_write" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x63d2ff63, "eeprom_93cx6_wren" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xb4db57f7, "mii_link_ok" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x30c76023, "free_netdev" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii,eeprom_93cx6");

MODULE_ALIAS("of:N*T*Cmicrel,ks8851");
MODULE_ALIAS("of:N*T*Cmicrel,ks8851C*");

MODULE_INFO(srcversion, "0223736142CB53BD0957DAA");
