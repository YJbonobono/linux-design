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
	{ 0x3fea57d8, "iw_handler_set_thrspy" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6214d8da, "proc_set_user" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x2a2b225a, "crypto_alloc_sync_skcipher" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x86d5e384, "wireless_spy_update" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x1604b82c, "iw_handler_get_spy" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x652032cb, "mac_pton" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x57dbcb92, "iw_handler_get_thrspy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe66a47be, "remove_proc_subtree" },
	{ 0x4297c00d, "proc_create_data" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x3fe0270d, "iw_handler_set_spy" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x154bf052, "proc_mkdir_mode" },
	{ 0xcf2a6966, "up" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xb832485a, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("pci:v000014B9d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d0000A504sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA92A5E1192C2D6F0FB835D");
