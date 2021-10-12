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
	{ 0xe516dae9, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x355aa170, "mddev_suspend" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3f7fe076, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0x51d5cd98, "md_flush_request" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xaa71e4c3, "disk_stack_limits" },
	{ 0x13490dfa, "bio_chain" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0xe4b54517, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7302df31, "md_set_array_sectors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x7741e001, "mddev_resume" },
	{ 0x6353f69c, "md_check_no_bitmap" },
	{ 0xa343f5ca, "md_integrity_register" },
	{ 0xbd74d856, "register_md_personality" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5D73E7CB11DF4C476ECE5C");
