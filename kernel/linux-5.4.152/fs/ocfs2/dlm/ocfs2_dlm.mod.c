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
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x6b9a4116, "o2nm_node_put" },
	{ 0xee39868f, "o2hb_unregister_callback" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x58c88ff2, "o2hb_get_all_regions" },
	{ 0x90cbf5b0, "o2hb_register_callback" },
	{ 0x754d539c, "strlen" },
	{ 0xd81336d0, "seq_release_private" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x696fa2fa, "o2net_register_handler" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb177d101, "seq_printf" },
	{ 0xf982e6db, "o2net_send_message" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf1a5611d, "o2net_unregister_handler_list" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5e95a4b2, "o2net_send_message_vec" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0x39f84ae9, "__seq_open_private" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x5c77beed, "o2hb_setup_callback" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x924199b4, "o2nm_get_node_by_num" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xbd13ee5d, "o2hb_check_node_heartbeating_no_sem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ocfs2_nodemanager");


MODULE_INFO(srcversion, "23A526815E08B3CA1FB0476");
