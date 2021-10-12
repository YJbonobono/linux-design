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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xca0f2bdd, "user_path_at_empty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa1de6a4, "__remove_inode_hash" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf86f5edc, "filemap_write_and_wait_range" },
	{ 0xc2362304, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x919d12af, "kill_anon_super" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x275f43ba, "is_bad_inode" },
	{ 0x48a4a1d4, "touch_atime" },
	{ 0x23f7d6b9, "dput" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0xa24a50f8, "d_find_alias" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce544cea, "vfs_fsync" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0xd2b39846, "super_setup_bdi" },
	{ 0x78704039, "mount_nodev" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x82016237, "__insert_inode_hash" },
	{ 0xc78529be, "kernel_read" },
	{ 0x2eba0f5e, "vfs_iter_write" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xeba488c2, "from_kgid" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xce807a25, "up_write" },
	{ 0x9d94374a, "shrink_dcache_sb" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa164179, "fput" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0xd53f3096, "__task_pid_nr_ns" },
	{ 0x575e7f0e, "ilookup5" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xb10761cc, "vfs_iter_read" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x575a8329, "d_drop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xacbb4c38, "d_prune_aliases" },
	{ 0x8a15c77b, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1742734a, "path_put" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xecdc9702, "init_pid_ns" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x23e606a9, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a86ab41, "page_get_link" },
	{ 0xc12615a6, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xead48a8b, "__sb_end_write" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x91896b1c, "fget" },
	{ 0xdc91b8f2, "__sb_start_write" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0xc88c39db, "task_active_pid_ns" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x42a8e072, "new_inode" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52977a3a, "__class_create" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4c029823, "clear_nlink" },
	{ 0x131ceac8, "generic_fillattr" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "89FDE8A3C13E815D481AB32");
