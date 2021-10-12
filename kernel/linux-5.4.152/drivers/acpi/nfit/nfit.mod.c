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
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0xf93df54d, "nvdimm_cmd_mask" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd232528d, "nd_blk_region_provider_data" },
	{ 0x799a4263, "nd_blk_region_to_dimm" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xcc15c055, "nvdimm_bus_attribute_group" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf6a28554, "region_intersects" },
	{ 0xaf076aec, "nd_fletcher64" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0xbbd2c344, "nvdimm_attribute_group" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0x195f31c, "nd_blk_region_set_provider_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x56470118, "__warn_printk" },
	{ 0x93f9b58, "nvdimm_kobj" },
	{ 0xab1d6a02, "nvdimm_pmem_region_create" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x6e887a67, "kernfs_put" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1877ca13, "mce_is_memory_error" },
	{ 0x2d1b72fb, "nd_cmd_in_size" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xed0bffbd, "nd_region_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1721b875, "nvdimm_bus_register" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x87ba6b1d, "nvdimm_to_bus" },
	{ 0x4d43a70a, "nd_numa_attribute_group" },
	{ 0x1ad7bd88, "nvdimm_in_overwrite" },
	{ 0x3a18b7be, "nvdimm_flush" },
	{ 0x5f23e3fa, "insert_resource" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8d7641a3, "nd_region_acquire_lane" },
	{ 0xac294bae, "nvdimm_provider_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7c6ee614, "nvdimm_volatile_region_create" },
	{ 0x79839108, "devm_nvdimm_memremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcd6178b, "nd_region_attribute_group" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xfa297415, "acpi_map_pxm_to_node" },
	{ 0x531f934f, "to_nvdimm_bus_dev" },
	{ 0x37078ccf, "nvdimm_name" },
	{ 0x3744c246, "nd_blk_memremap_flags" },
	{ 0x28950169, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xdc41982d, "nvdimm_bus_unregister" },
	{ 0xb501b2df, "nd_cmd_dimm_desc" },
	{ 0xf8e14baa, "nd_mapping_attribute_group" },
	{ 0xe3a53f4c, "sort" },
	{ 0x6220713b, "nd_cmd_out_size" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x7b47a782, "nd_region_release_lane" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdf1a5a3, "nd_device_attribute_group" },
	{ 0x67d2fd26, "to_nd_desc" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0xc2c5802, "work_busy" },
	{ 0xb2db2d5, "remove_resource" },
	{ 0x4be295d3, "nvdimm_has_flush" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e1dbb8b, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xac00e3a6, "to_nvdimm_bus" },
	{ 0xc1b5240e, "kernfs_notify" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b1d94aa, "mce_is_correctable" },
	{ 0x8384647a, "acpi_map_pxm_to_online_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5fd768ab, "nvdimm_bus_check_dimm_count" },
	{ 0x7c7e727f, "to_nd_region" },
	{ 0xd86b16ce, "__nvdimm_create" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x7678f587, "to_nvdimm" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa01a8d9b, "nd_cmd_bus_desc" },
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0xfbd7318b, "nvdimm_bus_add_badrange" },
	{ 0x987ac2b6, "nd_region_provider_data" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x174ef6c2, "mce_usable_address" },
	{ 0xb37a539e, "to_nd_blk_region" },
	{ 0x4c56c23d, "nvdimm_region_notify" },
	{ 0x61a7786c, "nvdimm_blk_region_create" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI0012:*");

MODULE_INFO(srcversion, "D4D59CF4A717CD740B3BFC9");
