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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x845aa525, "dm_unregister_target" },
	{ 0xa8db51d6, "dm_register_target" },
	{ 0xad3ac0da, "raid5_set_cache_size" },
	{ 0x193a53f, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x7e5bf785, "md_start" },
	{ 0xe638a259, "md_run" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xeddddc33, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x6f8f9c53, "dm_set_target_max_io_len" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe79ed301, "md_rdev_init" },
	{ 0xf6761f25, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x96848186, "scnprintf" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xfb578fc5, "memset" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0xb3160032, "dm_disk" },
	{ 0x5bf3e9b4, "dm_table_get_md" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7741e001, "mddev_resume" },
	{ 0x6222ef14, "md_error" },
	{ 0x435f054, "sync_page_io" },
	{ 0xb3528552, "md_wakeup_thread" },
	{ 0x14e2194c, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3a6f94c7, "mddev_congested" },
	{ 0x7b3fcd54, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa4b4d90, "dm_put_device" },
	{ 0xe9075709, "md_rdev_clear" },
	{ 0x383e55e0, "md_handle_request" },
	{ 0x6e4938a8, "md_stop_writes" },
	{ 0x355aa170, "mddev_suspend" },
	{ 0xa33c6e9e, "md_bitmap_load" },
	{ 0x5c32d7b5, "md_bitmap_resize" },
	{ 0x4f530362, "mddev_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5abd715f, "md_update_sb" },
	{ 0xc5850110, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "raid456");


MODULE_INFO(srcversion, "5CBCA718993FE7AC6F9160C");
