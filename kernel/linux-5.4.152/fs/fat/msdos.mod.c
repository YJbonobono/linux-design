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
	{ 0xa22572d7, "fat_detach" },
	{ 0x6512816f, "drop_nlink" },
	{ 0xc79a390a, "mark_buffer_dirty_inode" },
	{ 0x2d829b1, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0x6f75c14f, "fat_flush_inodes" },
	{ 0x9798fd45, "fat_truncate_time" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbee38071, "mount_bdev" },
	{ 0xd0f59c48, "fat_sync_inode" },
	{ 0xd5ec0ed2, "fat_add_entries" },
	{ 0xf8e47039, "fat_remove_entries" },
	{ 0x6bd71c89, "fat_alloc_new_dir" },
	{ 0x94c178e3, "fat_fill_super" },
	{ 0xbb36e233, "fat_build_inode" },
	{ 0xc4998bf7, "fat_update_time" },
	{ 0x87efe729, "fat_attach" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0xc72e906d, "sync_dirty_buffer" },
	{ 0x5d3d377e, "fat_getattr" },
	{ 0xb56ea999, "__brelse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xe23090a9, "fat_scan" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x1320d817, "__fat_fs_error" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x84c80c2b, "fat_setattr" },
	{ 0xd5779147, "fat_free_clusters" },
	{ 0xba9b961e, "fat_get_dotdot_entry" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0xcead9277, "fat_time_unix2fat" },
	{ 0x14cd924, "fat_dir_empty" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0x4c029823, "clear_nlink" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D01692F7EFF184FED923163");
