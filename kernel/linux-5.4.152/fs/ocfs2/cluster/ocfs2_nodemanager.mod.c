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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x968a4ef3, "fs_bio_set" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x46e131aa, "sock_create_lite" },
	{ 0x754d539c, "strlen" },
	{ 0x7343b8cd, "kset_register" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xd81336d0, "seq_release_private" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3f03166b, "configfs_undepend_item" },
	{ 0x64aff8b2, "sock_release" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x202b6156, "sock_recvmsg" },
	{ 0xb177d101, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe7d72b83, "kobject_set_name" },
	{ 0xb3051965, "config_item_put" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3504cdf1, "igrab" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc9a363e1, "configfs_depend_item" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6006847, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x39f84ae9, "__seq_open_private" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x186c68e4, "configfs_remove_default_groups" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x81b59f6b, "configfs_register_subsystem" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa164179, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4122186, "bio_put" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x994dbb68, "submit_bio" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0x5198bc49, "fs_kobj" },
	{ 0xe4b54517, "bdevname" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0x3d9dd6d3, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x21e07a4d, "I_BDEV" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x23e606a9, "iput" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9e3d3f75, "sock_create" },
	{ 0x3dbbb79, "set_user_nice" },
	{ 0xe9953458, "config_item_get" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xadb843ef, "blkdev_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x664f4f51, "config_group_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D93C2B77740C1C36D8923A0");
