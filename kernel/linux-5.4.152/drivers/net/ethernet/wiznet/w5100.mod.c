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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x349cba85, "strchr" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0xf10de535, "ioread8" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb832485a, "consume_skb" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6F5BDAF86DDF14A209AAAAE");
