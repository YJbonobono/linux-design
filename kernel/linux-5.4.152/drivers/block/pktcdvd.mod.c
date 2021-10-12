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
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0xfd205417, "no_llseek" },
	{ 0x93082893, "misc_deregister" },
	{ 0x3ef358d4, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x94567929, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x582aac6d, "bioset_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x21361fea, "bio_list_copy_data" },
	{ 0xfd880970, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x3dbbb79, "set_user_nice" },
	{ 0x6006847, "current_task" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0x30bbb4b6, "bio_reset" },
	{ 0xb177d101, "seq_printf" },
	{ 0xdfd19a2d, "bio_devname" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x992c17e9, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0xd6eec034, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x13490dfa, "bio_chain" },
	{ 0xe516dae9, "bio_split" },
	{ 0x20c1fb27, "blk_queue_split" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xa32f9ea3, "bd_set_size" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x130b568, "wake_up_process" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0x9f4af172, "blk_queue_logical_block_size" },
	{ 0xacf0053e, "blk_queue_make_request" },
	{ 0x6c45747b, "set_blocksize" },
	{ 0x6b347276, "__module_get" },
	{ 0xe4b54517, "bdevname" },
	{ 0xadb843ef, "blkdev_get" },
	{ 0xb980abe, "bdget" },
	{ 0xcce31aa4, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x36f3be67, "__blkdev_driver_ioctl" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x861cd726, "put_disk" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0x51ce92, "device_unregister" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca9360b5, "rb_next" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x4122186, "bio_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x672312a, "blk_rq_map_kern" },
	{ 0xfe1643a0, "blk_put_request" },
	{ 0x5232fe69, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x9cb4da82, "blk_get_request" },
	{ 0x87a67f49, "single_open" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F7ED0C59BE5A77176529C3F");
