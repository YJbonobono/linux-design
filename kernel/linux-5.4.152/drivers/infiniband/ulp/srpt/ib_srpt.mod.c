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
	{ 0x492452ad, "ib_unregister_client" },
	{ 0xf801e691, "target_unregister_template" },
	{ 0x300b2c5d, "ib_register_client" },
	{ 0xcf56df01, "target_register_template" },
	{ 0x63fbb6f1, "ib_send_cm_rep" },
	{ 0xb7f30f4f, "__rdma_accept" },
	{ 0x878580cc, "ib_find_cached_pkey" },
	{ 0xec216569, "ib_create_qp_user" },
	{ 0xfd90d145, "rdma_create_qp" },
	{ 0x96a20d74, "target_setup_session" },
	{ 0x5792f848, "strlcpy" },
	{ 0x37cb946b, "__ib_alloc_cq_any" },
	{ 0x9f7f3863, "rdma_reject" },
	{ 0x3b93d9c3, "ib_send_cm_rej" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8e23dedf, "ib_unregister_mad_agent" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x889afa0f, "ib_send_cm_drep" },
	{ 0xa01841b9, "ib_send_cm_dreq" },
	{ 0xda0e366, "rdma_disconnect" },
	{ 0x4c0fe6e5, "ib_unregister_event_handler" },
	{ 0x1c94266c, "ib_dealloc_pd_user" },
	{ 0x1bf594ba, "ib_create_cm_id" },
	{ 0x638148e0, "ib_set_client_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x68bfc054, "ib_register_event_handler" },
	{ 0x83d37934, "ib_cm_listen" },
	{ 0x6ab77bc2, "rdma_port_get_link_layer" },
	{ 0x421ab620, "__ib_alloc_pd" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x722d25fc, "ib_create_srq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb794516f, "ib_free_cq_user" },
	{ 0x134ba339, "ib_destroy_qp_user" },
	{ 0x3da36b99, "ib_destroy_cm_id" },
	{ 0x11a6c0c9, "target_remove_session" },
	{ 0x470232f2, "target_wait_for_sess_cmds" },
	{ 0x58c857fe, "target_sess_cmd_list_set_waiting" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x34a33d56, "target_submit_tmr" },
	{ 0xd69bedf5, "target_send_busy" },
	{ 0xce7e46e, "target_submit_cmd_map_sgls" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x638bffb7, "target_free_sgl" },
	{ 0x80c0b486, "rdma_rw_ctx_destroy" },
	{ 0x194984e9, "rdma_rw_ctx_init" },
	{ 0x7a1d0d3c, "target_alloc_sgl" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xfa8786f6, "ib_destroy_srq_user" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x4f738ef0, "kmem_cache_size" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x79a357e9, "transport_generic_request_failure" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0x85a11934, "ib_cm_init_qp_attr" },
	{ 0xbf22a37d, "ib_free_recv_mad" },
	{ 0x8423fbea, "ib_post_send_mad" },
	{ 0xb67ecb17, "ib_create_send_mad" },
	{ 0x4065aae6, "ib_create_ah_from_wc" },
	{ 0x95eaf439, "ib_modify_qp" },
	{ 0x8b709d83, "rdma_rw_ctx_wrs" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0xc2258b94, "core_tpg_register" },
	{ 0x5b93520e, "core_tpg_deregister" },
	{ 0xd1313788, "inet_pton_with_scope" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x754d539c, "strlen" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x710a5141, "rdma_destroy_id" },
	{ 0xee828278, "rdma_listen" },
	{ 0x165ec8fb, "rdma_bind_addr" },
	{ 0xc693c9ec, "__rdma_create_id" },
	{ 0x78381292, "init_net" },
	{ 0x96848186, "scnprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa99f49b7, "ib_free_send_mad" },
	{ 0x7869d9a8, "rdma_destroy_ah_user" },
	{ 0x3cab7375, "ib_register_mad_agent" },
	{ 0xac2112ad, "rdma_query_gid" },
	{ 0x7a1884c2, "ib_query_port" },
	{ 0xd505b3ee, "ib_modify_port" },
	{ 0xd058ca3, "rdma_notify" },
	{ 0x64981b65, "ib_cm_notify" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ib_core,target_core_mod,ib_cm,rdma_cm");


MODULE_INFO(srcversion, "20A371420B9EF120347A62D");
