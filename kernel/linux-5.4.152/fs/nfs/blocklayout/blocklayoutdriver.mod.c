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
	{ 0x3e6bb329, "pnfs_unregister_layoutdriver" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa85308c2, "pnfs_generic_pg_init_write" },
	{ 0x968a4ef3, "fs_bio_set" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xcd7ea20e, "rpc_unlink" },
	{ 0xc0dcb2d4, "pnfs_ld_write_done" },
	{ 0xea4422f4, "pnfs_error_mark_layout_for_return" },
	{ 0x23f7d6b9, "dput" },
	{ 0xc41c9ae6, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x60e76fa8, "nfs4_mark_deviceid_unavailable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xad593894, "rpc_mkpipe_data" },
	{ 0x687b2e52, "rpc_mkpipe_dentry" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd4d444d7, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xca32d1bb, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2a1b727d, "pnfs_generic_pg_cleanup" },
	{ 0xbe924593, "pnfs_generic_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x48711f9d, "xdr_init_decode_pages" },
	{ 0xe4db0054, "rpc_queue_upcall" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0xfb30c4ad, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbf36d05e, "blkdev_get_by_path" },
	{ 0x84f36915, "nfs_pageio_reset_write_mds" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb0575930, "rpc_d_lookup_sb" },
	{ 0x410fb612, "blkdev_get_by_dev" },
	{ 0x776988bf, "nfs4_put_deviceid_node" },
	{ 0x4122186, "bio_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x92739103, "rpc_pipe_generic_upcall" },
	{ 0x994dbb68, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb0db9ce4, "rpc_destroy_pipe_data" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xc9f7c21f, "rpc_put_sb_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd3441a85, "pnfs_generic_pg_readpages" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x53b4d960, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x424fba30, "pnfs_generic_pg_writepages" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37c5f7db, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcc0b1178, "xdr_inline_decode" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x2df342b7, "nfs_pageio_reset_read_mds" },
	{ 0x7c042722, "nfs4_init_deviceid_node" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbde2b2e9, "pnfs_set_lo_fail" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x87f437d8, "xdr_set_scratch_buffer" },
	{ 0x942ef16f, "pnfs_ld_read_done" },
	{ 0x71dc307b, "__put_page" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x99727abd, "pnfs_register_layoutdriver" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");


MODULE_INFO(srcversion, "131139394D0AA9F9D6CF3C4");
