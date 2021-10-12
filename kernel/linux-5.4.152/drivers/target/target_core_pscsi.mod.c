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
	{ 0xcf0c6e3c, "passthrough_attrib_attrs" },
	{ 0x347960c5, "target_backend_unregister" },
	{ 0xdcff8b2b, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xbf36d05e, "blkdev_get_by_path" },
	{ 0x1cbc34b6, "scsi_device_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0xaa1ff60, "__scsi_execute" },
	{ 0x56470118, "__warn_printk" },
	{ 0x103eea0, "blk_execute_rq_nowait" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xf4531fcb, "blk_rq_append_bio" },
	{ 0x183e38b7, "bio_add_pc_page" },
	{ 0x9cb4da82, "blk_get_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xfd477675, "passthrough_parse_cdb" },
	{ 0xf6514726, "scsi_host_lookup" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4122186, "bio_put" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xdb8d1b9, "transport_kunmap_data_sg" },
	{ 0x45077940, "transport_kmap_data_sg" },
	{ 0x5180489c, "target_lun_is_rdonly" },
	{ 0xdeaedbdf, "target_complete_cmd_with_length" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x796b09a7, "transport_copy_sense_to_cmd" },
	{ 0xfe1643a0, "blk_put_request" },
	{ 0x959a09cf, "target_complete_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "02830CF3F67074F8E914A5E");
