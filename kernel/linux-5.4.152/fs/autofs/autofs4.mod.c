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
	{ 0x6512816f, "drop_nlink" },
	{ 0x2a36fb0a, "put_pid" },
	{ 0x349cba85, "strchr" },
	{ 0x5a6e1db6, "get_task_pid" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7a3688a5, "path_is_mountpoint" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xcdaeb45e, "pid_vnr" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x23f7d6b9, "dput" },
	{ 0xb177d101, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x77b429c, "dentry_open" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7ec78bdd, "rename_lock" },
	{ 0x70d701b9, "d_add" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x78704039, "mount_nodev" },
	{ 0x859f0d82, "path_get" },
	{ 0xbeac898e, "may_umount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0xfd94814e, "complete_all" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x2d5b200c, "dcache_dir_lseek" },
	{ 0x8eb423bd, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xbdbe887, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x425956b, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x690ca19d, "__close_fd" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa164179, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd53f3096, "__task_pid_nr_ns" },
	{ 0x92502faf, "path_has_submounts" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x575a8329, "d_drop" },
	{ 0x34e05a8c, "may_umount_tree" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1742734a, "path_put" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5225db6f, "simple_empty" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fb16f20, "dcache_readdir" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfce8d1fc, "d_lookup" },
	{ 0xecdc9702, "init_pid_ns" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3dd0a00d, "find_get_pid" },
	{ 0x3cc605e, "dcache_dir_open" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x126d7fc9, "dcache_dir_close" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x484c0738, "follow_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x1924f57c, "fd_install" },
	{ 0x91896b1c, "fget" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x31931cc5, "__kernel_write" },
	{ 0x2eff9aa7, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x42a8e072, "new_inode" },
	{ 0x814ec624, "follow_down_one" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x93082893, "misc_deregister" },
	{ 0x4c029823, "clear_nlink" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe818ae0a, "kern_path_mountpoint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F837A8D53B4A444019D1150");
