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
	{ 0x845aa525, "dm_unregister_target" },
	{ 0xa8db51d6, "dm_register_target" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5bf3e9b4, "dm_table_get_md" },
	{ 0xeddddc33, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x582aac6d, "bioset_init" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x85df9b6c, "strsep" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xfdf637af, "dm_table_device_name" },
	{ 0x82eef861, "crypto_alloc_ahash" },
	{ 0x9166fada, "strncpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f984513, "strrchr" },
	{ 0x30a0f471, "dm_accept_partial_bio" },
	{ 0x483d92b0, "crypto_alloc_skcipher" },
	{ 0x8feff2f3, "crypto_req_done" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xaa4b4d90, "dm_put_device" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0x53126ecc, "__percpu_counter_sum" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x3ef358d4, "bioset_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x6006847, "current_task" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x992c17e9, "bio_clone_fast" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8772d101, "bio_integrity_add_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x520f7e7e, "bio_integrity_alloc" },
	{ 0xdfd19a2d, "bio_devname" },
	{ 0x29361773, "complete" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x130b568, "wake_up_process" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4122186, "bio_put" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x37a0cba, "kfree" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x126a75a3, "dm_per_bio_data" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x96848186, "scnprintf" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x75e60613, "key_put" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0x4bdabf0a, "request_key_tag" },
	{ 0xdcb2dc92, "key_type_logon" },
	{ 0x7108e419, "key_type_user" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x7a4497db, "kzfree" },
	{ 0xfb578fc5, "memset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0xc5850110, "printk" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "909C701F04F9293AFE55117");
