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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34e0549f, "driver_register" },
	{ 0x39092fdc, "fw_send_request" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xc43974ee, "fw_bus_type" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69d67f17, "fw_iso_context_start" },
	{ 0x86cb5e9, "fw_iso_context_queue_flush" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x30c76023, "free_netdev" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe296672d, "register_netdev" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x90108c63, "fw_iso_buffer_destroy" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbf026860, "fw_iso_context_queue" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4f9b8e8, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x955db70a, "fw_iso_context_stop" },
	{ 0xf782bec, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x60be1f0a, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xb832485a, "consume_skb" },
	{ 0x5150492, "fw_iso_buffer_init" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0xb66b7240, "fw_iso_context_destroy" },
	{ 0xf494d147, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000001*");
MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000002*");

MODULE_INFO(srcversion, "84E6DF182A9AEA0C2E057E8");
