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
	{ 0x85b618f1, "iscsit_unregister_transport" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xecdd9860, "iscsit_register_transport" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7bbd2ab3, "rdma_reject_msg" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x421ab620, "__ib_alloc_pd" },
	{ 0xe78f0b0, "__ib_alloc_cq_user" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xb7f30f4f, "__rdma_accept" },
	{ 0xcf2a6966, "up" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x9f7f3863, "rdma_reject" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xee828278, "rdma_listen" },
	{ 0x165ec8fb, "rdma_bind_addr" },
	{ 0xc693c9ec, "__rdma_create_id" },
	{ 0x78381292, "init_net" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xbb698d61, "iscsit_build_text_rsp" },
	{ 0x4b8dc5be, "iscsit_build_logout_rsp" },
	{ 0x3517a7c6, "iscsit_build_task_mgt_rsp" },
	{ 0x4f437819, "iscsit_build_reject" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xf69728c1, "iscsit_build_nopin_rsp" },
	{ 0xaaaa6bf9, "iscsit_build_rsp_pdu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0x79a357e9, "transport_generic_request_failure" },
	{ 0xe44dd69e, "iscsit_logout_post_handler" },
	{ 0x8a556e12, "iscsit_tmr_post_handler" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6006847, "current_task" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x134ba339, "ib_destroy_qp_user" },
	{ 0x710a5141, "rdma_destroy_id" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4d09fac4, "iscsit_cause_connection_reinstatement" },
	{ 0x5b91f67a, "iscsit_process_text_cmd" },
	{ 0x69acdf38, "memcpy" },
	{ 0x842d3ce6, "iscsit_setup_text_cmd" },
	{ 0x19dcebb7, "iscsit_find_cmd_from_itt" },
	{ 0x6be1187b, "iscsit_set_unsolicited_dataout" },
	{ 0xe55d29d3, "iscsit_sequence_cmd" },
	{ 0x346d36d4, "iscsit_process_scsi_cmd" },
	{ 0xd189fc98, "iscsit_setup_scsi_cmd" },
	{ 0x9e68da80, "iscsit_process_nop_out" },
	{ 0x49eec49d, "iscsit_setup_nop_out" },
	{ 0x6087623a, "iscsit_handle_logout_cmd" },
	{ 0xe9e4211f, "iscsit_check_dataout_payload" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x1a9bbac5, "iscsit_check_dataout_hdr" },
	{ 0xbda4cfe, "iscsit_handle_task_mgt_cmd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x470232f2, "target_wait_for_sess_cmds" },
	{ 0x58c857fe, "target_sess_cmd_list_set_waiting" },
	{ 0x7738b9a7, "ib_drain_qp" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0xc1688611, "iscsit_release_cmd" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0xd7d1cab7, "iscsit_stop_dataout_timer" },
	{ 0x75acc614, "rdma_rw_ctx_destroy_signature" },
	{ 0x80c0b486, "rdma_rw_ctx_destroy" },
	{ 0xe8c27ea0, "iscsit_allocate_cmd" },
	{ 0xda0e366, "rdma_disconnect" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xfd90d145, "rdma_create_qp" },
	{ 0x1c94266c, "ib_dealloc_pd_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xb794516f, "ib_free_cq_user" },
	{ 0x3ee74d17, "rdma_rw_ctx_signature_init" },
	{ 0xac2c35e0, "rdma_rw_ctx_post" },
	{ 0x194984e9, "rdma_rw_ctx_init" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7b96bad0, "ib_check_mr_status" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x29361773, "complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd058ca3, "rdma_notify" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iscsi_target_mod,rdma_cm,ib_core,target_core_mod");


MODULE_INFO(srcversion, "D4FFEFBC1AF84712C1CBE33");
