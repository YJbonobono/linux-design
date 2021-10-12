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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xb0e602eb, "memmove" },
	{ 0x29361773, "complete" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x6833822f, "netif_rx" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x96f8c098, "open_candev" },
	{ 0x77d59f8f, "close_candev" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x285da97a, "free_candev" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xb832485a, "consume_skb" },
	{ 0x8f64285e, "sock_efree" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x96848186, "scnprintf" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "70412AA9E88F94398A45A60");
