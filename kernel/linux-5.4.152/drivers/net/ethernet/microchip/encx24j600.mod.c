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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xee0d3c74, "spi_bus_type" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xe8c8c6c2, "regmap_encx24j600_spi_read" },
	{ 0xe296672d, "register_netdev" },
	{ 0x130b568, "wake_up_process" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x9d60d57f, "__kthread_init_worker" },
	{ 0x12a38747, "usleep_range" },
	{ 0x66c0bbb9, "regcache_cache_bypass" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd7e2baf7, "devm_regmap_init_encx24j600" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0xcc4fa41a, "regmap_encx24j600_spi_write" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb832485a, "consume_skb" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xa7da0c9e, "kthread_queue_work" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x277b79a7, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x5792f848, "strlcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x30c76023, "free_netdev" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "encx24j600-regmap");

MODULE_ALIAS("spi:encx24j600");

MODULE_INFO(srcversion, "2085124BB765ACE91683636");
