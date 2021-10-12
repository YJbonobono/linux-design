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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x3f7fe076, "unregister_md_personality" },
	{ 0xbd74d856, "register_md_personality" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0xa343f5ca, "md_integrity_register" },
	{ 0x7302df31, "md_set_array_sectors" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0xaa71e4c3, "disk_stack_limits" },
	{ 0x18abba37, "blk_queue_io_opt" },
	{ 0xbac71768, "blk_queue_io_min" },
	{ 0xe6a551a4, "blk_queue_max_discard_sectors" },
	{ 0x4fdc9b13, "blk_queue_max_write_zeroes_sectors" },
	{ 0xac7647e6, "blk_queue_max_write_same_sectors" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0x6353f69c, "md_check_no_bitmap" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x7062c854, "bio_clone_blkg_association" },
	{ 0x157e97e4, "__blkdev_issue_discard" },
	{ 0x51d5cd98, "md_flush_request" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x13490dfa, "bio_chain" },
	{ 0xe516dae9, "bio_split" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4b54517, "bdevname" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D52A565BA1DEA4AF6144392");
