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
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf11f616d, "release_sock" },
	{ 0x46dbb2a8, "ib_set_device_ops" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x9a6a9ac3, "ib_device_put" },
	{ 0x754d539c, "strlen" },
	{ 0x4783657f, "tcp_rate_check_app_limited" },
	{ 0x9a4e8eb, "remap_vmalloc_range" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0x64aff8b2, "sock_release" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x218d6226, "rdma_link_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0x10ef7ddc, "__skb_checksum" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb15b4109, "crc32c" },
	{ 0x206eb25b, "rdma_link_unregister" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51d49c06, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0xcca3c037, "kthread_bind" },
	{ 0x5902190f, "ib_unregister_device_queued" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0x38635676, "dma_virt_ops" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0x4f5e81f6, "ib_device_set_netdev" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x7b56b034, "ib_unregister_driver" },
	{ 0xce807a25, "up_write" },
	{ 0x78381292, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0x565db21d, "flush_signals" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xca210d44, "ib_device_get_by_netdev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa944103a, "get_user_pages" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xafa530b2, "put_user_pages_dirty_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x14e42001, "do_tcp_sendpages" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x493963fd, "kernel_recvmsg" },
	{ 0xd0bac3ee, "kernel_accept" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x8dfc4b74, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa24887e1, "__dynamic_ibdev_dbg" },
	{ 0x9e3d3f75, "sock_create" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x8d12095d, "tcp_read_sock" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "ib_core,libcrc32c");


MODULE_INFO(srcversion, "71A80CF79D969463E25B99A");
