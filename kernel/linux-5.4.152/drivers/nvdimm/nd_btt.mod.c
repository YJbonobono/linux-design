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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0xae55e1de, "nd_btt_version" },
	{ 0xd8ed941c, "badblocks_check" },
	{ 0x9803a617, "generic_end_io_acct" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe17f9234, "nd_integrity_init" },
	{ 0x92486163, "nvdimm_namespace_capacity" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbfb9dc69, "debugfs_create_x32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x7b7ac28f, "nvdimm_namespace_disk_name" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8d7641a3, "nd_region_acquire_lane" },
	{ 0xcce31aa4, "blk_alloc_queue" },
	{ 0x6006847, "current_task" },
	{ 0xd0a23261, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf58ddd4a, "generic_start_io_acct" },
	{ 0x7b47a782, "nd_region_release_lane" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x19f6dc39, "nd_dev_to_uuid" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0xacf0053e, "blk_queue_make_request" },
	{ 0x9c10e638, "debugfs_create_x64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x861cd726, "put_disk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7cc4fbdf, "nd_btt_arena_is_valid" },
	{ 0x499f0ecf, "nd_sb_checksum" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c7e727f, "to_nd_region" },
	{ 0xbfc46c6c, "debugfs_create_u16" },
	{ 0x3a7a0c96, "nvdimm_revalidate_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9f4af172, "blk_queue_logical_block_size" },
	{ 0x3aaba8b, "page_endio" },
	{ 0xe2260823, "bio_integrity_prep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F2605550209986A9CB35631");
