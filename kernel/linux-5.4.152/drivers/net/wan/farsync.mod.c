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
	{ 0x6e724099, "param_array_ops" },
	{ 0x7a6a041, "hdlc_start_xmit" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x30c76023, "free_netdev" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc4434a4c, "alloc_hdlcdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x83cbb6f2, "hdlc_open" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x17bcdfa8, "hdlc_close" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x65e8720c, "hdlc_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6833822f, "netif_rx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xc5850110, "printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xb832485a, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd23a93ef, "unregister_hdlc_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v00001619d00000400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00001610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00001612sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BE315FBBE7E8546737DEA2C");
