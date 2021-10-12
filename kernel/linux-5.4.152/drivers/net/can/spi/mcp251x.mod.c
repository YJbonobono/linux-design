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
	{ 0x45b06668, "can_change_mtu" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0x96f8c098, "open_candev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x77d59f8f, "close_candev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7089480, "unregister_candev" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0x2292b333, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x285da97a, "free_candev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfd99eba1, "can_free_echo_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "E1984423394CD655CE63C8A");
