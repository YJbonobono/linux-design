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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0xac9b3b36, "nvmem_register" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7092be58, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf31357c9, "sysfs_create_files" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x6bbb9bc3, "lookup_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xec18a2a9, "bdi_alloc_node" },
	{ 0xe5a01321, "device_register" },
	{ 0xc5850110, "printk" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0xd2f5de42, "fixed_size_llseek" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a9cd14e, "device_create" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x94567929, "__class_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ca80045, "bdi_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6b347276, "__module_get" },
	{ 0xdc722609, "sysfs_remove_files" },
	{ 0x886d193f, "logfc" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf750809, "sget_fc" },
	{ 0xbe613c87, "nvmem_unregister" },
	{ 0x51ce92, "device_unregister" },
	{ 0x8591d7d5, "ledtrig_mtd_activity" },
	{ 0x82fbca78, "bdi_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xffd8dda9, "bdput" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x9980ad30, "generic_shutdown_super" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3FBE7EF373715FBC7D14743");
