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
	{ 0xa47fda83, "nfs_unlink" },
	{ 0x86eeb318, "nfs_symlink" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x31f6b2c7, "nfs_refresh_inode" },
	{ 0x3a7a1cde, "nfs_close_context" },
	{ 0x4b12f093, "nfs_free_client" },
	{ 0x397a040b, "nfs_try_mount" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x981573c2, "nfs_permission" },
	{ 0x10c4407d, "nfs_link" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xc31836cc, "nfs_instantiate" },
	{ 0x1d6dc11, "nfs_sops" },
	{ 0xd92e82cc, "nfs_setattr_update_inode" },
	{ 0x3f414466, "unregister_nfs_version" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7a68dfdc, "nfs_rmdir" },
	{ 0xb2f0bcdf, "xdr_reserve_space" },
	{ 0xfd7adc4f, "nfs_alloc_fattr" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xc7b743d, "nfs_fattr_init" },
	{ 0x6c98e8de, "xdr_terminate_string" },
	{ 0x6e788c9e, "nfs_setattr" },
	{ 0xa1adbf9f, "nfs_fs_type" },
	{ 0xb00fbc18, "rpc_prepare_reply_pages" },
	{ 0x376b633c, "rpc_call_sync" },
	{ 0x8bbbabfb, "rpc_call_start" },
	{ 0xc5850110, "printk" },
	{ 0x834f9c90, "register_nfs_version" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcb9c104, "nfs_getattr" },
	{ 0x548ff39a, "nfs_invalidate_atime" },
	{ 0x26884ff7, "nfs_alloc_fhandle" },
	{ 0xa86efbe3, "nfs_lookup" },
	{ 0x15c4411a, "nfs_rename" },
	{ 0x690d9f8f, "nfs_file_operations" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc543cf0, "nfs_mkdir" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe61ec01f, "nfs_create" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb4b1ab4, "xdr_read_pages" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x37a0cba, "kfree" },
	{ 0xbbfb1de7, "nfs_init_client" },
	{ 0x5a2abce, "nfs_create_server" },
	{ 0x81adc538, "nfs_mknod" },
	{ 0xa8abcded, "__tracepoint_nfs_xdr_status" },
	{ 0x2844f671, "nfs_submount" },
	{ 0xcc0b1178, "xdr_inline_decode" },
	{ 0x485ae48f, "xdr_write_pages" },
	{ 0x431741c2, "nfs_dentry_operations" },
	{ 0x2db7ddd5, "nfs_alloc_client" },
	{ 0xa420d44d, "nfs_writeback_update_inode" },
	{ 0xec6e9875, "nlmclnt_proc" },
	{ 0xbbcad045, "nfs_clone_server" },
};

MODULE_INFO(depends, "nfs,sunrpc,lockd");


MODULE_INFO(srcversion, "1943558883FE6108B647876");
