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
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x52dd0c09, "param_get_int" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xcaac0113, "badblocks_clear" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xd8ed941c, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xd2237016, "radix_tree_delete_item" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb3051965, "config_item_put" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x68341749, "blk_queue_chunk_sectors" },
	{ 0x6edeeb13, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb2e54a18, "blk_alloc_queue_node" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6006847, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe6a551a4, "blk_queue_max_discard_sectors" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0xffb7c514, "ida_free" },
	{ 0x153696b9, "blk_mq_stop_hw_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x81b59f6b, "configfs_register_subsystem" },
	{ 0x5129f78f, "blk_revalidate_disk_zones" },
	{ 0xa6a599f8, "blk_mq_start_stopped_hw_queues" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0x168bae17, "badblocks_show" },
	{ 0xacf0053e, "blk_queue_make_request" },
	{ 0x96333815, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8787e89c, "badblocks_init" },
	{ 0x861cd726, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0x3d9dd6d3, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcdf0a638, "blk_queue_required_elevator_features" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x23045299, "blk_mq_end_request" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x146eb90a, "blk_queue_write_cache" },
	{ 0xc89686a7, "badblocks_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x82c87ad5, "nr_online_nodes" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xbb1fb378, "badblocks_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x77bc13a0, "strim" },
	{ 0x9f4af172, "blk_queue_logical_block_size" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x664f4f51, "config_group_init" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DACFE80124B79AB65FEA430");
