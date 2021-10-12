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
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x96f8c098, "open_candev" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0x77d59f8f, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xe4c60f13, "alloc_canfd_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x285da97a, "free_candev" },
	{ 0x7089480, "unregister_candev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cifi,canfd-1.0");
MODULE_ALIAS("of:N*T*Cifi,canfd-1.0C*");

MODULE_INFO(srcversion, "C4115A1A2C0DB4D58E9C3EA");
