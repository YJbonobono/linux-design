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
	{ 0x3f7fe076, "unregister_md_personality" },
	{ 0xbd74d856, "register_md_personality" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0x99d797cf, "md_unregister_thread" },
	{ 0x18abba37, "blk_queue_io_opt" },
	{ 0xbac71768, "blk_queue_io_min" },
	{ 0x4fdc9b13, "blk_queue_max_write_zeroes_sectors" },
	{ 0xac7647e6, "blk_queue_max_write_same_sectors" },
	{ 0xe6a551a4, "blk_queue_max_discard_sectors" },
	{ 0xa37748be, "mddev_init_writes_pending" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x582aac6d, "bioset_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7a57020a, "bio_copy_data" },
	{ 0x34dd2129, "bio_trim" },
	{ 0xca33cc1a, "submit_bio_wait" },
	{ 0x1c3a6d22, "rdev_clear_badblocks" },
	{ 0xb5126fb6, "md_check_recovery" },
	{ 0xc54ea3e7, "md_finish_reshape" },
	{ 0x686b3805, "md_bitmap_end_sync" },
	{ 0x61bc8c26, "bio_alloc_mddev" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0x52c4c2ba, "md_bitmap_close_sync" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x26d60cae, "md_bitmap_start_sync" },
	{ 0x8934940d, "md_bitmap_cond_end_sync" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa922fe0c, "md_new_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x91b42f02, "md_register_thread" },
	{ 0x1b289cd0, "md_do_sync" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51d5cd98, "md_flush_request" },
	{ 0xfb578fc5, "memset" },
	{ 0x1865f7cc, "md_write_start" },
	{ 0x3aa0225d, "md_wait_for_blocked_rdev" },
	{ 0x8fdc4be5, "md_bitmap_startwrite" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x97ce074e, "md_bitmap_unplug" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x13490dfa, "bio_chain" },
	{ 0xe516dae9, "bio_split" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa00e9da3, "__trace_note_message" },
	{ 0x6006847, "current_task" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x3ef358d4, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x6222ef14, "md_error" },
	{ 0x2f7bfb86, "rdev_set_badblocks" },
	{ 0x435f054, "sync_page_io" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x992c17e9, "bio_clone_fast" },
	{ 0xd8ed941c, "badblocks_check" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x71dc307b, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x4122186, "bio_put" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x72ec148d, "md_cluster_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa343f5ca, "md_integrity_register" },
	{ 0xc5850110, "printk" },
	{ 0xb177d101, "seq_printf" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0xaa71e4c3, "disk_stack_limits" },
	{ 0x88bc1a00, "md_integrity_add_rdev" },
	{ 0xc1b5240e, "kernfs_notify" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe4b54517, "bdevname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x30bbb4b6, "bio_reset" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x7302df31, "md_set_array_sectors" },
	{ 0x5c32d7b5, "md_bitmap_resize" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa1ccb4be, "md_done_sync" },
	{ 0xb3528552, "md_wakeup_thread" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb8373de2, "md_write_end" },
	{ 0xaf244b4e, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "99E60C71AF865E9A0394EE6");
