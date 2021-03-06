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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x92095a87, "iscsi_host_remove" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x59d11b69, "ib_fmr_pool_map_phys" },
	{ 0x1c94266c, "ib_dealloc_pd_user" },
	{ 0xa7432cd4, "iscsi_queuecommand" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x8575a8b6, "iscsi_conn_stop" },
	{ 0x56470118, "__warn_printk" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc693c9ec, "__rdma_create_id" },
	{ 0xe55b192a, "iscsi_eh_recover_target" },
	{ 0x63c87209, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x204b257f, "iscsi_session_teardown" },
	{ 0x710a5141, "rdma_destroy_id" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x42026801, "iscsi_host_add" },
	{ 0xc32b59ff, "ib_destroy_fmr_pool" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa0ea6380, "iscsi_host_alloc" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xe353f037, "iscsi_lookup_endpoint" },
	{ 0xf9ca8514, "rdma_connect" },
	{ 0x756b9ec5, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xff66ddfe, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe78f0b0, "__ib_alloc_cq_user" },
	{ 0x7b96bad0, "ib_check_mr_status" },
	{ 0x96bc7e53, "rdma_destroy_qp" },
	{ 0xc889e1f5, "iscsi_conn_send_pdu" },
	{ 0x219f72f4, "iscsi_session_get_param" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfc9961fa, "iscsi_host_set_param" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xf79fa1c7, "iscsi_conn_teardown" },
	{ 0x203be1c4, "iscsi_put_task" },
	{ 0x40330b87, "iscsi_host_free" },
	{ 0x5e9d0433, "iscsi_conn_get_param" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xde88d4f1, "iscsi_destroy_endpoint" },
	{ 0x78381292, "init_net" },
	{ 0x2f007a28, "ib_alloc_mr_integrity" },
	{ 0x4a760101, "ib_map_mr_sg" },
	{ 0xfd90d145, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87834c80, "iscsi_set_param" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x4c0fe6e5, "ib_unregister_event_handler" },
	{ 0x6ec1388, "rdma_resolve_route" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x68bfc054, "ib_register_event_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa77d8efe, "iscsi_register_transport" },
	{ 0xf43e6f63, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x697b8805, "ib_drain_sq" },
	{ 0x907228db, "ib_alloc_mr_user" },
	{ 0xc4b82d1e, "iscsi_prep_data_out_pdu" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xda0e366, "rdma_disconnect" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x45b9962d, "iscsi_complete_pdu" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x11902748, "iscsi_conn_failure" },
	{ 0x37b7a754, "ib_query_qp" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xf327b655, "iscsi_eh_cmd_timed_out" },
	{ 0xb06ce0d3, "iscsi_suspend_queue" },
	{ 0x952a9ac8, "ib_dereg_mr_user" },
	{ 0x634b0179, "iscsi_create_endpoint" },
	{ 0x669ff46d, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x8dfc4b74, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8bac2bbc, "ib_create_fmr_pool" },
	{ 0x2eb999a0, "ib_map_mr_sg_pi" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0xad1f0968, "rdma_resolve_addr" },
	{ 0xc2b5ffbc, "iscsi_session_setup" },
	{ 0x971bf4fb, "iscsi_host_get_param" },
	{ 0x421ab620, "__ib_alloc_pd" },
	{ 0x6d6390b4, "iscsi_conn_bind" },
	{ 0x12559622, "iscsi_target_alloc" },
	{ 0x7b5bba27, "ib_fmr_pool_unmap" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x7bbd2ab3, "rdma_reject_msg" },
	{ 0x652c10c, "iscsi_session_recovery_timedout" },
	{ 0xb0d54d24, "iscsi_conn_setup" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xb794516f, "ib_free_cq_user" },
};

MODULE_INFO(depends, "libiscsi,ib_core,rdma_cm,scsi_transport_iscsi");


MODULE_INFO(srcversion, "7824EF4C15269C219585C68");
