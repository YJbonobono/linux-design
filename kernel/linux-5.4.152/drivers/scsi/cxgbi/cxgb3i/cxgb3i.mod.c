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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf327b655, "iscsi_eh_cmd_timed_out" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x12559622, "iscsi_target_alloc" },
	{ 0xe55b192a, "iscsi_eh_recover_target" },
	{ 0xf43e6f63, "iscsi_eh_device_reset" },
	{ 0x669ff46d, "iscsi_eh_abort" },
	{ 0xa7432cd4, "iscsi_queuecommand" },
	{ 0xef346615, "cxgbi_attr_is_visible" },
	{ 0x798463b2, "cxgbi_ep_disconnect" },
	{ 0xa3300916, "cxgbi_ep_poll" },
	{ 0x95c1d897, "cxgbi_ep_connect" },
	{ 0x652c10c, "iscsi_session_recovery_timedout" },
	{ 0xd7b9bb6d, "cxgbi_parse_pdu_itt" },
	{ 0x4cc4b36, "cxgbi_conn_init_pdu" },
	{ 0xe1a9cb28, "cxgbi_conn_xmit_pdu" },
	{ 0x68723b50, "cxgbi_conn_alloc_pdu" },
	{ 0x1c7ca337, "cxgbi_cleanup_task" },
	{ 0x9a7e414b, "iscsi_tcp_task_xmit" },
	{ 0xab92579d, "iscsi_tcp_task_init" },
	{ 0x67a6f5dc, "cxgbi_get_conn_stats" },
	{ 0xc889e1f5, "iscsi_conn_send_pdu" },
	{ 0xb0df9c40, "cxgbi_set_host_param" },
	{ 0xb7fa09b, "cxgbi_get_host_param" },
	{ 0x219f72f4, "iscsi_session_get_param" },
	{ 0x5e9d0433, "iscsi_conn_get_param" },
	{ 0x884ea98d, "cxgbi_get_ep_param" },
	{ 0x5b908bd5, "cxgbi_set_conn_param" },
	{ 0x2b82e914, "iscsi_tcp_conn_teardown" },
	{ 0x8575a8b6, "iscsi_conn_stop" },
	{ 0xff66ddfe, "iscsi_conn_start" },
	{ 0x81b6747c, "cxgbi_bind_conn" },
	{ 0x7dbbaac6, "cxgbi_create_conn" },
	{ 0x29680678, "cxgbi_destroy_session" },
	{ 0xc86329b1, "cxgbi_create_session" },
	{ 0xf1847be8, "cxgbi_iscsi_cleanup" },
	{ 0x7fdb6004, "cxgbi_device_unregister_all" },
	{ 0xd2dace7a, "cxgb3_unregister_client" },
	{ 0x369db9ec, "cxgb3_register_client" },
	{ 0x3c25f5cb, "cxgbi_iscsi_init" },
	{ 0x8fa70ec3, "cxgbi_sock_select_mss" },
	{ 0x8900dd9b, "cxgb3_alloc_atid" },
	{ 0x27721d59, "t3_l2t_get" },
	{ 0x6c62fd65, "t3_l2e_free" },
	{ 0xe181bb66, "cxgb3_remove_tid" },
	{ 0x2133e06d, "cxgbi_sock_purge_wr_queue" },
	{ 0x4868c4c, "cxgb3_free_atid" },
	{ 0x91dbf30a, "cxgbi_conn_tx_open" },
	{ 0xc43d0a47, "cxgbi_sock_established" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xbd738da8, "cxgb3_insert_tid" },
	{ 0xd239733b, "cxgbi_sock_free_cpl_skbs" },
	{ 0x55a0b766, "cxgbi_sock_closed" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0x37a0cba, "kfree" },
	{ 0x230d7d43, "cxgbi_sock_fail_act_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa9cdc41, "cxgb3_queue_tid_release" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x34d03d32, "cxgbi_conn_pdu_ready" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7aee8aaf, "cxgbi_sock_skb_entail" },
	{ 0x82c3eae3, "t3_l2t_send_slow" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa21d309b, "cxgbi_hbas_add" },
	{ 0x927f9beb, "cxgbi_device_portmap_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa9c3ad99, "cxgbi_ddp_ppm_setup" },
	{ 0x1bdaafe1, "cxgbi_tagmask_set" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d6090ee, "cxgbi_device_register" },
	{ 0x9a19f634, "cxgbi_sock_rcv_peer_close" },
	{ 0x378c08e5, "cxgbi_sock_rcv_abort_rpl" },
	{ 0xb0aef420, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x77c0d18c, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x8d502c16, "cxgb3_ofld_send" },
	{ 0x301ecc0a, "cxgbi_device_unregister" },
	{ 0x102c7f00, "cxgbi_device_find_by_lldev" },
	{ 0xc5850110, "printk" },
	{ 0x7bc28bc3, "__kfree_skb" },
	{ 0xaa081798, "cxgbi_sock_rcv_wr_ack" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libcxgbi,libiscsi_tcp,cxgb3,libcxgb");


MODULE_INFO(srcversion, "485E052933D0FCA4F635826");
