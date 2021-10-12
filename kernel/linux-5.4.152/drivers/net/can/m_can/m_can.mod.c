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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0x77d59f8f, "close_candev" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x285da97a, "free_candev" },
	{ 0x6e4e3fc0, "pinctrl_pm_select_sleep_state" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x45b06668, "can_change_mtu" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7089480, "unregister_candev" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97476dc9, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x96f8c098, "open_candev" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0xe4c60f13, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0xfd99eba1, "can_free_echo_skb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "2FD4E39E7B50874547D8081");
