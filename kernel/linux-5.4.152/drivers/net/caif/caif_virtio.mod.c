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
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0x3b78d396, "register_virtio_driver" },
	{ 0x30c76023, "free_netdev" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xd2f1a79, "virtqueue_detach_unused_buf" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x8c94dae0, "virtqueue_enable_cb" },
	{ 0xc6e8543, "virtqueue_kick" },
	{ 0x499acd60, "virtqueue_add_outbuf" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8029dd2, "virtqueue_disable_cb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xab2ad981, "virtqueue_get_vring_size" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x4d7e3b8b, "vringh_need_notify_kern" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xe42f476d, "vringh_notify_disable_kern" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x1ad4f052, "vringh_notify_enable_kern" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdc2d9f94, "vringh_getdesc_kern" },
	{ 0x29cea78, "vringh_complete_kern" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5e121547, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vringh");

MODULE_ALIAS("virtio:d0000000Cv*");

MODULE_INFO(srcversion, "374AD212A8783231639DC47");
