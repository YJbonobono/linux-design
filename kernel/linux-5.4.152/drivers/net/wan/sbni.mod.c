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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xefe74502, "netdev_boot_setup_check" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0x19ab1532, "pci_get_class" },
	{ 0x85bd1608, "__request_region" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "73D124B9C845467E6340A29");
