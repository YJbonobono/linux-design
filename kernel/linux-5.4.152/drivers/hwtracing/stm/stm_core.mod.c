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
	{ 0xe3b66737, "class_find_device" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xfd205417, "no_llseek" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0xcf01e53d, "device_match_name" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe7d72b83, "kobject_set_name" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0xb3051965, "config_item_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x999e8297, "vfree" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x17138045, "pm_runtime_no_callbacks" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb8a800f7, "__get_task_comm" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf47e020f, "cleanup_srcu_struct" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0xdac4913a, "bitmap_allocate_region" },
	{ 0x335e4ce6, "device_add" },
	{ 0x81b59f6b, "configfs_register_subsystem" },
	{ 0x94567929, "__class_register" },
	{ 0x565c8b0a, "init_srcu_struct" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3d9dd6d3, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xe9953458, "config_item_get" },
	{ 0x2b826dca, "vm_iomap_memory" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x51ce92, "device_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x664f4f51, "config_group_init" },
	{ 0xd64ed259, "__memcat_p" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "67DA7E1BAD1C6145C59C5BB");
