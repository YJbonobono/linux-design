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
	{ 0xcbd9ad6c, "nd_btt_probe" },
	{ 0xb0f23e8d, "to_nd_pfn" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x77358855, "iomem_resource" },
	{ 0x6232307f, "devm_init_badblocks" },
	{ 0xcaac0113, "badblocks_clear" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x1cc56130, "nvdimm_namespace_common_probe" },
	{ 0xe3107243, "is_nd_pfn" },
	{ 0xd8ed941c, "badblocks_check" },
	{ 0x7242d92, "put_dax" },
	{ 0x9803a617, "generic_end_io_acct" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8135613, "dax_write_cache" },
	{ 0xf998715e, "devm_nsio_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1627a31e, "devm_memremap_pages" },
	{ 0x6e887a67, "kernfs_put" },
	{ 0xa5c5718c, "blk_freeze_queue_start" },
	{ 0x62adffb1, "is_nvdimm_sync" },
	{ 0x96528870, "nd_dax_probe" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0xb2e54a18, "blk_alloc_queue_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3a920c9, "nd_pfn_probe" },
	{ 0x3a18b7be, "nvdimm_flush" },
	{ 0x26dac47c, "is_nd_btt" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x7b7ac28f, "nvdimm_namespace_disk_name" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x966bdd5d, "devm_nsio_enable" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x6006847, "current_task" },
	{ 0xd0a23261, "to_nd_btt" },
	{ 0x8f896c84, "pmem_sector_size" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x30b99988, "__nd_driver_register" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x6725a431, "dax_attribute_group" },
	{ 0x821a4805, "nvdimm_clear_poison" },
	{ 0x28950169, "kernfs_find_and_get_ns" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xfafc06b2, "_copy_to_iter_mcsafe" },
	{ 0xf58ddd4a, "generic_start_io_acct" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x646e905, "pmem_should_map_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4be295d3, "nvdimm_has_flush" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xbdb2b6f, "__generic_fsdax_supported" },
	{ 0xd3973186, "nvdimm_namespace_detach_btt" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0xacf0053e, "blk_queue_make_request" },
	{ 0x9e9b0fd2, "nvdimm_badblocks_populate" },
	{ 0x96333815, "blk_queue_physical_block_size" },
	{ 0x6047ca43, "nvdimm_namespace_attach_btt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x6a8de30f, "nvdimm_setup_pfn" },
	{ 0xfad9c827, "kill_dax" },
	{ 0x861cd726, "put_disk" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xc855f9b3, "_copy_from_iter_flushcache" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc1b5240e, "kernfs_notify" },
	{ 0x3718df71, "alloc_dax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x833c3313, "__memcpy_mcsafe" },
	{ 0x146eb90a, "blk_queue_write_cache" },
	{ 0x69acdf38, "memcpy" },
	{ 0x99c011d8, "mcsafe_key" },
	{ 0x7c7e727f, "to_nd_region" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x3a7a0c96, "nvdimm_revalidate_disk" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x7f0908ce, "devm_memremap" },
	{ 0xfb2bcfa9, "nvdimm_has_cache" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9f4af172, "blk_queue_logical_block_size" },
	{ 0x3aaba8b, "page_endio" },
};

MODULE_INFO(depends, "nd_btt");


MODULE_INFO(srcversion, "45A3C8088DE2EAEB49FDB2F");
