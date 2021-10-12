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
	{ 0xa24f23d8, "__request_module" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xca33cc1a, "submit_bio_wait" },
	{ 0xa3673c02, "dm_bio_get_target_bio_nr" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0x53b954a2, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0xeddddc33, "dm_get_device" },
	{ 0x54fa2920, "dm_io" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x5bf3e9b4, "dm_table_get_md" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x72f07bf4, "dm_bufio_set_minimum_buffers" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0x605670e, "bio_uninit" },
	{ 0x999e8297, "vfree" },
	{ 0xa8db51d6, "dm_register_target" },
	{ 0xe3ffd0ed, "dm_kcopyd_copy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x171739b9, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x30bbb4b6, "bio_reset" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x6facf676, "dm_internal_suspend_fast" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xfb578fc5, "memset" },
	{ 0x44af9ee7, "dm_kcopyd_zero" },
	{ 0x486d7fab, "bio_init" },
	{ 0x6f8f9c53, "dm_set_target_max_io_len" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x845aa525, "dm_unregister_target" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x647eb0c1, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc8863140, "dm_suspended" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x284e5c6, "bio_endio" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x30a0f471, "dm_accept_partial_bio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x7880c781, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5355332, "dm_hold" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x2473f47e, "dm_table_get_size" },
	{ 0xca9360b5, "rb_next" },
	{ 0xaa4b4d90, "dm_put_device" },
	{ 0x126a75a3, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x4bbe4c00, "dm_internal_resume_fast" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-bufio");


MODULE_INFO(srcversion, "1C8046DF2994631B1D5A827");
