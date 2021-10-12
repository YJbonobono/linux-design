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
	{ 0x7a6a041, "hdlc_start_xmit" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x83cbb6f2, "hdlc_open" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4434a4c, "alloc_hdlcdev" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x17bcdfa8, "hdlc_close" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x65e8720c, "hdlc_ioctl" },
	{ 0xb832485a, "consume_skb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x30c76023, "free_netdev" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xd23a93ef, "unregister_hdlc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v0000120Ed00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "03F99748EA6440CD28D86FE");
