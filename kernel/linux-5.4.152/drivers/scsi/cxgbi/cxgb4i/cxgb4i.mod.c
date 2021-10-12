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
	{ 0x63effe55, "param_ops_ushort" },
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
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0x9b33e0d7, "unregister_dcbevent_notifier" },
	{ 0x93b3fc74, "register_dcbevent_notifier" },
	{ 0x33f02ead, "cxgb4_register_uld" },
	{ 0x3c25f5cb, "cxgbi_iscsi_init" },
	{ 0x91dbf30a, "cxgbi_conn_tx_open" },
	{ 0xc43d0a47, "cxgbi_sock_established" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x34d03d32, "cxgbi_conn_pdu_ready" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0x29ae9354, "cxgb4_pktgl_to_skb" },
	{ 0x908304ba, "dcb_getapp" },
	{ 0x1788200a, "dcb_ieee_getapp_mask" },
	{ 0x635e1df8, "cxgb4_clip_get" },
	{ 0x4ecee62a, "__neigh_event_send" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xa38670f7, "cxgb4_port_idx" },
	{ 0x7ac2674e, "cxgb4_port_chan" },
	{ 0xd69a0294, "cxgb4_best_mtu" },
	{ 0x6af35031, "cxgb4_l2t_get" },
	{ 0xcdb2874f, "cxgb4_alloc_atid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x77c0d18c, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x55a0b766, "cxgbi_sock_closed" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x1a68e2df, "cxgb4_clip_release" },
	{ 0xd3807353, "cxgb4_free_atid" },
	{ 0x91e2da0f, "cxgb4_l2t_release" },
	{ 0x2133e06d, "cxgbi_sock_purge_wr_queue" },
	{ 0xd239733b, "cxgbi_sock_free_cpl_skbs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2a205d2f, "cxgb4_remove_tid" },
	{ 0x37a0cba, "kfree" },
	{ 0x230d7d43, "cxgbi_sock_fail_act_open" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7aee8aaf, "cxgbi_sock_skb_entail" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xa21d309b, "cxgbi_hbas_add" },
	{ 0x927f9beb, "cxgbi_device_portmap_create" },
	{ 0xa9c3ad99, "cxgbi_ddp_ppm_setup" },
	{ 0x1d6090ee, "cxgbi_device_register" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xf2c09ce2, "cxgb4_l2t_send" },
	{ 0x4703ebb0, "cxgb4_select_ntuple" },
	{ 0x9a19f634, "cxgbi_sock_rcv_peer_close" },
	{ 0x378c08e5, "cxgbi_sock_rcv_abort_rpl" },
	{ 0xb0aef420, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0x29361773, "complete" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x331a552a, "cxgb4_ofld_send" },
	{ 0x7bc28bc3, "__kfree_skb" },
	{ 0xaa081798, "cxgbi_sock_rcv_wr_ack" },
	{ 0x301ecc0a, "cxgbi_device_unregister" },
	{ 0x11902748, "iscsi_conn_failure" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17a4b9a2, "cxgbi_device_find_by_netdev_rcu" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x78381292, "init_net" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libcxgbi,libiscsi_tcp,cxgb4");


MODULE_INFO(srcversion, "82CDF75609BC718E02EA00F");
