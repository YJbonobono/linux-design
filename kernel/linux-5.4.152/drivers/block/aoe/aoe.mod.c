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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9c0a44f3, "__blk_mq_end_request" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x87a67f49, "single_open" },
	{ 0x648b5826, "blk_mq_run_hw_queues" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xc29bf967, "strspn" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x13f3aab9, "blk_mq_unfreeze_queue" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6b1c0ae3, "blk_mq_freeze_queue" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x9a9cd14e, "device_create" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x9b553753, "skb_pull" },
	{ 0xe714e8a1, "blk_update_request" },
	{ 0xce807a25, "up_write" },
	{ 0x78381292, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x9f984513, "strrchr" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x861cd726, "put_disk" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x130b568, "wake_up_process" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a4ae873, "blk_mq_quiesce_queue" },
	{ 0x18cbf39, "blk_mq_unquiesce_queue" },
	{ 0x3dbbb79, "set_user_nice" },
	{ 0xc0cca725, "class_destroy" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52977a3a, "__class_create" },
	{ 0xaac8c671, "bdget_disk" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xffd8dda9, "bdput" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E065BF8D1B156BABC1084A9");
