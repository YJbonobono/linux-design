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
	{ 0xdb09ef93, "nfs4_schedule_session_recovery" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xa7a0c1a, "nfs_request_add_commit_list" },
	{ 0x7e3201ef, "pnfs_nfs_generic_sync" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xd41f84ff, "nfs4_pnfs_ds_connect" },
	{ 0x98b0827f, "pnfs_generic_clear_request_commit" },
	{ 0x422d574c, "nfs4_setup_sequence" },
	{ 0x90d97d2c, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xf823faf6, "nfs_initiate_commit" },
	{ 0xea4422f4, "pnfs_error_mark_layout_for_return" },
	{ 0x96952f3a, "nfs4_pnfs_ds_put" },
	{ 0x60e76fa8, "nfs4_mark_deviceid_unavailable" },
	{ 0xdf05942f, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0x3fcdde72, "nfs4_decode_mp_ds_addr" },
	{ 0x23324f52, "nfs_initiate_pgio" },
	{ 0x9a832a2f, "nfs4_set_rw_stateid" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe600c4cb, "pnfs_generic_commit_pagelist" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x1c285ac8, "pnfs_generic_recover_commit_reqs" },
	{ 0xd4d444d7, "pnfs_generic_pg_test" },
	{ 0xac483c64, "pnfs_update_layout" },
	{ 0xcc4f1a29, "rpc_exit" },
	{ 0x2a1b727d, "pnfs_generic_pg_cleanup" },
	{ 0x39e59c4, "pnfs_generic_write_commit_done" },
	{ 0xbbf9bc3, "rpc_delay" },
	{ 0x48711f9d, "xdr_init_decode_pages" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xfb30c4ad, "nfs4_find_get_deviceid" },
	{ 0x39cd6729, "nfs4_find_or_create_ds_client" },
	{ 0x84f36915, "nfs_pageio_reset_write_mds" },
	{ 0x7429c17, "pnfs_layout_mark_request_commit" },
	{ 0xa9e0a4ac, "pnfs_destroy_layout" },
	{ 0x8a6663c4, "nfs4_pnfs_ds_add" },
	{ 0xf2900a1a, "pnfs_put_lseg" },
	{ 0x776988bf, "nfs4_put_deviceid_node" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0x314e7bec, "pnfs_set_layoutcommit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc57b1365, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x945ff3aa, "nfs41_sequence_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9fb190e, "nfs4_test_deviceid_unavailable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0xd3441a85, "pnfs_generic_pg_readpages" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8af26bf3, "pnfs_read_done_resend_to_mds" },
	{ 0x34d211a3, "rpc_count_iostats" },
	{ 0x33c3d277, "rpc_restart_call_prepare" },
	{ 0x424fba30, "pnfs_generic_pg_writepages" },
	{ 0xd4350f26, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b71765c, "pnfs_generic_pg_check_layout" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1cdde079, "__tracepoint_nfs4_pnfs_read" },
	{ 0xd302d4eb, "pnfs_write_done_resend_to_mds" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0xcc0b1178, "xdr_inline_decode" },
	{ 0x163831c3, "__tracepoint_nfs4_pnfs_write" },
	{ 0x2df342b7, "nfs_pageio_reset_read_mds" },
	{ 0x7c042722, "nfs4_init_deviceid_node" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xbde2b2e9, "pnfs_set_lo_fail" },
	{ 0x87f437d8, "xdr_set_scratch_buffer" },
	{ 0xa420d44d, "nfs_writeback_update_inode" },
	{ 0x99727abd, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "nfsv4,nfs,sunrpc");


MODULE_INFO(srcversion, "7398B9DB19C6B56D669F831");
