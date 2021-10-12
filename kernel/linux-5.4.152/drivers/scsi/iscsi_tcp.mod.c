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
	{ 0xf327b655, "iscsi_eh_cmd_timed_out" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x12559622, "iscsi_target_alloc" },
	{ 0xe55b192a, "iscsi_eh_recover_target" },
	{ 0xf43e6f63, "iscsi_eh_device_reset" },
	{ 0x669ff46d, "iscsi_eh_abort" },
	{ 0xa7432cd4, "iscsi_queuecommand" },
	{ 0x652c10c, "iscsi_session_recovery_timedout" },
	{ 0xf2036eca, "iscsi_tcp_cleanup_task" },
	{ 0x9a7e414b, "iscsi_tcp_task_xmit" },
	{ 0xab92579d, "iscsi_tcp_task_init" },
	{ 0xc889e1f5, "iscsi_conn_send_pdu" },
	{ 0xfc9961fa, "iscsi_host_set_param" },
	{ 0x219f72f4, "iscsi_session_get_param" },
	{ 0xff66ddfe, "iscsi_conn_start" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x63c87209, "iscsi_unregister_transport" },
	{ 0xa77d8efe, "iscsi_register_transport" },
	{ 0x82eef861, "crypto_alloc_ahash" },
	{ 0xf006d461, "iscsi_tcp_conn_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd4697d5b, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x8575a8b6, "iscsi_conn_stop" },
	{ 0x2e0cacd7, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b82e914, "iscsi_tcp_conn_teardown" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x55bb6508, "blk_queue_dma_alignment" },
	{ 0xc5850110, "printk" },
	{ 0x5958b7d1, "iscsi_tcp_r2tpool_alloc" },
	{ 0xc2b5ffbc, "iscsi_session_setup" },
	{ 0x42026801, "iscsi_host_add" },
	{ 0xa0ea6380, "iscsi_host_alloc" },
	{ 0x40330b87, "iscsi_host_free" },
	{ 0x92095a87, "iscsi_host_remove" },
	{ 0x204b257f, "iscsi_session_teardown" },
	{ 0xc8f01eff, "iscsi_tcp_r2tpool_free" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0xc8d8e129, "iscsi_tcp_recv_skb" },
	{ 0x8d12095d, "tcp_read_sock" },
	{ 0x15cc76a0, "iscsi_conn_queue_work" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xa164179, "fput" },
	{ 0xc847ec99, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x81ffe1d4, "sk_set_memalloc" },
	{ 0x6d6390b4, "iscsi_conn_bind" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x4dc84d10, "iscsi_tcp_set_max_r2t" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x87834c80, "iscsi_set_param" },
	{ 0x187588b3, "kernel_getpeername" },
	{ 0x5e9d0433, "iscsi_conn_get_param" },
	{ 0x971bf4fb, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x11201cb7, "kernel_getsockname" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xf9ac27af, "iscsi_tcp_conn_get_stats" },
	{ 0x11902748, "iscsi_conn_failure" },
	{ 0x6006847, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x73d0ded1, "iscsi_tcp_segment_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fe8b3f9, "iscsi_tcp_segment_done" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x843068e5, "iscsi_tcp_dgst_header" },
	{ 0xf3189776, "iscsi_segment_seek_sg" },
	{ 0x98e07dcc, "iscsi_segment_init_linear" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x8455b966, "iscsi_dbg_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "DFE21E5C399272844F7907E");
