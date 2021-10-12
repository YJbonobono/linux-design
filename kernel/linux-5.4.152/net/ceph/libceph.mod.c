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
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x754d539c, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8962d1a6, "seq_escape" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x64aff8b2, "sock_release" },
	{ 0x6618707, "set_page_dirty_lock" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x202b6156, "sock_recvmsg" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xec01448a, "generic_key_instantiate" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4bdabf0a, "request_key_tag" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc8050216, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x596c50d1, "__put_net" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x2a2b225a, "crypto_alloc_sync_skcipher" },
	{ 0xfd94814e, "complete_all" },
	{ 0xece784c2, "rb_first" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0x1862c060, "iov_iter_bvec" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6006847, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x1208a414, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0x13179c16, "__page_cache_alloc" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x4e3567f7, "match_int" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75e60613, "key_put" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xd84a2dc8, "dns_query" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x1953c958, "mempool_create" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xfc8e3c98, "register_key_type" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x422ce162, "unregister_key_type" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "libcrc32c");


MODULE_INFO(srcversion, "915EC0D99CBE44982F02F3B");
