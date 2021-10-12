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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0xd78696a, "pinctrl_select_state" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x371e8a2a, "pinctrl_lookup_state" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0x8932d613, "pinctrl_get" },
	{ 0x77d59f8f, "close_candev" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x285da97a, "free_candev" },
	{ 0x6e4e3fc0, "pinctrl_pm_select_sleep_state" },
	{ 0x1537a8f4, "pinctrl_put" },
	{ 0x45b06668, "can_change_mtu" },
	{ 0x7089480, "unregister_candev" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97476dc9, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x96f8c098, "open_candev" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "40A38A0F24F66685943AFB3");
