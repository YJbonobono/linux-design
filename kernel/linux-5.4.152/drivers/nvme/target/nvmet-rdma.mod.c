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
	{ 0x194984e9, "rdma_rw_ctx_init" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0x98aea7df, "nvmet_req_uninit" },
	{ 0x1c94266c, "ib_dealloc_pd_user" },
	{ 0xcc0cada8, "nvmet_ctrl_fatal_error" },
	{ 0x7738b9a7, "ib_drain_qp" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xc693c9ec, "__rdma_create_id" },
	{ 0xef73ac16, "nvmet_sq_init" },
	{ 0x710a5141, "rdma_destroy_id" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x722d25fc, "ib_create_srq" },
	{ 0xfadaada8, "nvmet_req_execute" },
	{ 0xb7f30f4f, "__rdma_accept" },
	{ 0x134ba339, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe78f0b0, "__ib_alloc_cq_user" },
	{ 0x96bc7e53, "rdma_destroy_qp" },
	{ 0xee828278, "rdma_listen" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd1313788, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6421d7fa, "rdma_set_afonly" },
	{ 0xd058ca3, "rdma_notify" },
	{ 0xceeb4cb1, "nvmet_register_transport" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x78381292, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x8b709d83, "rdma_rw_ctx_wrs" },
	{ 0x2f00d488, "nvmet_req_free_sgl" },
	{ 0xfd90d145, "rdma_create_qp" },
	{ 0xdc144b1a, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x300b2c5d, "ib_register_client" },
	{ 0x165ec8fb, "rdma_bind_addr" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x8594a898, "nvmet_unregister_transport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd0bd0caa, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfa8786f6, "ib_destroy_srq_user" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xda0e366, "rdma_disconnect" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9f7f3863, "rdma_reject" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xac2c35e0, "rdma_rw_ctx_post" },
	{ 0x37a0cba, "kfree" },
	{ 0x6812945f, "nvmet_req_alloc_sgl" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x32a50673, "nvmet_req_complete" },
	{ 0x421ab620, "__ib_alloc_pd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x80c0b486, "rdma_rw_ctx_destroy" },
	{ 0x7bbd2ab3, "rdma_reject_msg" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x492452ad, "ib_unregister_client" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xb794516f, "ib_free_cq_user" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core,nvmet,rdma_cm");


MODULE_INFO(srcversion, "076BDB6D26C840D7BEAB328");
