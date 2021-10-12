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
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x9b553753, "skb_pull" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc6cbbc89, "capable" },
	{ 0x29361773, "complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x979ffaf2, "parport_claim" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2d3e250, "parport_release" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9b50799e, "eth_header" },
	{ 0xd23d0972, "eth_header_cache" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x30c76023, "free_netdev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0xa916b694, "strnlen" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "514EC0BA67AE7859A9E4A65");
