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
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0x1cc56130, "nvdimm_namespace_common_probe" },
	{ 0x9803a617, "generic_end_io_acct" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe17f9234, "nd_integrity_init" },
	{ 0x92486163, "nvdimm_namespace_capacity" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x26dac47c, "is_nd_btt" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x7b7ac28f, "nvdimm_namespace_disk_name" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xcce31aa4, "blk_alloc_queue" },
	{ 0x6006847, "current_task" },
	{ 0xd0a23261, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x30b99988, "__nd_driver_register" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xf58ddd4a, "generic_start_io_acct" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xd3973186, "nvdimm_namespace_detach_btt" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0xacf0053e, "blk_queue_make_request" },
	{ 0x6047ca43, "nvdimm_namespace_attach_btt" },
	{ 0x861cd726, "put_disk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3a7a0c96, "nvdimm_revalidate_disk" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x9f4af172, "blk_queue_logical_block_size" },
	{ 0xe2260823, "bio_integrity_prep" },
};

MODULE_INFO(depends, "nd_btt");


MODULE_INFO(srcversion, "1AD06B999B337EB81017D27");
