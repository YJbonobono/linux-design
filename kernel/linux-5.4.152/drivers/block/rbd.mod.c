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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x51ce92, "device_unregister" },
	{ 0x55353855, "bus_register" },
	{ 0xe5a01321, "device_register" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x466b85b8, "libceph_compatible" },
	{ 0xbe3879aa, "ceph_get_snap_context" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x23045299, "blk_mq_end_request" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x29361773, "complete" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x4c858f11, "osd_req_op_raw_data_in_pages" },
	{ 0x1320e655, "blk_put_queue" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x4fdc9b13, "blk_queue_max_write_zeroes_sectors" },
	{ 0xe6a551a4, "blk_queue_max_discard_sectors" },
	{ 0xabedf82, "ceph_open_session" },
	{ 0xff310068, "ceph_create_client" },
	{ 0x335e4ce6, "device_add" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x19f1f7cc, "set_disk_ro" },
	{ 0x42aca45d, "blk_get_queue" },
	{ 0x18abba37, "blk_queue_io_opt" },
	{ 0xbac71768, "blk_queue_io_min" },
	{ 0xe8c1e50b, "blk_queue_max_segment_size" },
	{ 0xc2312e2, "blk_queue_max_segments" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x6b347276, "__module_get" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xace81187, "ceph_pg_poolid_by_name" },
	{ 0x2d4f04db, "ceph_wait_for_latest_osdmap" },
	{ 0x7e8e4fad, "ceph_destroy_options" },
	{ 0xf1633c34, "ceph_compare_options" },
	{ 0xe5dc9245, "ceph_parse_options" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0xc29bf967, "strspn" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xca80eb72, "ceph_pg_pool_name_by_id" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5fb3d39, "ceph_cls_set_cookie" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x20fdaa4d, "ceph_osdc_wait_request" },
	{ 0x6361593b, "osd_req_op_extent_osd_data_pages" },
	{ 0x2087719e, "ceph_oid_copy" },
	{ 0x9ca95932, "ceph_create_snap_context" },
	{ 0xeef6cfa3, "ceph_iterate_extents" },
	{ 0x38f2d94e, "ceph_file_to_extents" },
	{ 0xb97c828, "ceph_cls_assert_locked" },
	{ 0xd81aa853, "osd_req_op_cls_request_data_pages" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x417a9131, "ceph_oloc_destroy" },
	{ 0x96067f5c, "blk_set_queue_dying" },
	{ 0x6b1c0ae3, "blk_mq_freeze_queue" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x86fca7e4, "ceph_put_snap_context" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0xa01a406c, "ceph_osdc_put_request" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x534cd4a8, "ceph_destroy_client" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xbf354670, "ceph_cls_break_lock" },
	{ 0x93d8e595, "ceph_monc_blacklist_add" },
	{ 0xdfc091f9, "ceph_entity_type_name" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa698f998, "ceph_free_lockers" },
	{ 0x6578659b, "ceph_osdc_list_watchers" },
	{ 0xe9d60664, "ceph_cls_lock_info" },
	{ 0xa5d0b3df, "ceph_cls_lock" },
	{ 0xa635f1e, "ceph_copy_from_page_vector" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa4e9b701, "ceph_alloc_page_vector" },
	{ 0x3c8d7111, "ceph_get_num_objects" },
	{ 0x3750a460, "get_device" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf6ef4a1, "ceph_oid_printf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2101cbc9, "ceph_oid_destroy" },
	{ 0x9c6b1cb5, "ceph_osdc_alloc_messages" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x6347dd11, "osd_req_op_cls_request_data_bvecs" },
	{ 0x89e1287d, "osd_req_op_cls_init" },
	{ 0x369785b2, "ceph_osdc_watch" },
	{ 0x271ffe90, "osd_req_op_init" },
	{ 0xde2e0654, "osd_req_op_alloc_hint_init" },
	{ 0x7abab323, "osd_req_op_extent_init" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50a90e8d, "bsearch" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xd9189589, "ceph_osdc_call" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xebc96657, "ceph_osdc_flush_notifies" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x646ea293, "ceph_osdc_unwatch" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9bc6b539, "ceph_find_or_create_string" },
	{ 0x754d539c, "strlen" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1b3adff5, "ceph_osdc_notify_ack" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xca80437b, "ceph_extent_to_file" },
	{ 0x7c3aff95, "osd_req_op_extent_osd_data_bio" },
	{ 0x173ead32, "osd_req_op_extent_osd_data_bvec_pos" },
	{ 0x5aeeee62, "ceph_oid_aprintf" },
	{ 0xbd2f79ae, "ceph_oloc_copy" },
	{ 0xa20b2ac0, "ceph_osdc_alloc_request" },
	{ 0xfd94814e, "complete_all" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x8909507a, "ceph_release_page_vector" },
	{ 0xc6a193e1, "ceph_osdc_notify" },
	{ 0x6fb8b5a7, "ceph_client_addr" },
	{ 0xaa30cc8f, "ceph_client_gid" },
	{ 0xbf821959, "ceph_osdc_start_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4e3567f7, "match_int" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0xfb578fc5, "memset" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x861cd726, "put_disk" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xadcc3d57, "ceph_cls_unlock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libceph");


MODULE_INFO(srcversion, "EE8E1FA1E299C1205FE6409");
