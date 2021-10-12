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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x342ac131, "vlan_dev_vlan_id" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa8c9a5f7, "uio_unregister_device" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc5850110, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x78381292, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe70ff90d, "vlan_dev_real_dev" },
	{ 0x40cbbd80, "uio_event_notify" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb4fe5e64, "__uio_register_device" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "C98656A3C22CF9E5798EDCB");
