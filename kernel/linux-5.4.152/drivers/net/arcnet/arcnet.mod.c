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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xd20260f5, "led_trigger_event" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x56e07148, "sock_queue_err_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x581cf443, "skb_push" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x7835fd59, "devres_add" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1d24c454, "led_trigger_unregister_simple" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xadd28a3b, "led_trigger_register_simple" },
	{ 0x65da6e36, "led_trigger_blink_oneshot" },
	{ 0xc5fb0f3e, "skb_clone_sk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F6C458652EF40D47E06BD7");
