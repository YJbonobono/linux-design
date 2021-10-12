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
	{ 0x60eeacfe, "netdev_printk" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe296672d, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf5401d2b, "device_get_mac_address" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x5e121547, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xb832485a, "consume_skb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5850110, "printk" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x30c76023, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "AA36A830038CB4188292244");
