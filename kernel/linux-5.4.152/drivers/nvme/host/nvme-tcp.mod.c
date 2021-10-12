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
	{ 0xf11f616d, "release_sock" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xac8995da, "blk_mq_request_completed" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0xeea06c33, "nvme_stop_ctrl" },
	{ 0x79ae14cf, "nvme_unfreeze" },
	{ 0x9b3fb29e, "blk_mq_tagset_busy_iter" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xaebf4173, "nvmf_register_transport" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf20d7fd7, "nvme_shutdown_ctrl" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xea178af2, "nvme_set_queue_count" },
	{ 0x1f55378e, "nvme_stop_queues" },
	{ 0x83e3f2e3, "blk_mq_tag_to_rq" },
	{ 0xfd3cb0ad, "nvme_complete_async_event" },
	{ 0x1a08d751, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6edeeb13, "blk_mq_complete_request" },
	{ 0x68b46000, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x239dcbb7, "blk_mq_update_nr_hw_queues" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9fead42e, "crypto_ahash_final" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0x1862c060, "iov_iter_bvec" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf0ef13c0, "kernel_connect" },
	{ 0x81ffe1d4, "sk_set_memalloc" },
	{ 0x224547d, "nvme_enable_ctrl" },
	{ 0x6006847, "current_task" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3cb7544c, "nvmf_ip_options_match" },
	{ 0x992843e7, "nvmf_connect_admin_queue" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x49224181, "nvme_reset_wq" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x86889725, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd1313788, "inet_pton_with_scope" },
	{ 0xeffbf90f, "nvmf_reg_read64" },
	{ 0x8c83fd46, "blk_sync_queue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0x78381292, "init_net" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc81e91a8, "napi_busy_loop" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7b0a663, "nvme_init_ctrl" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x97d679c6, "nvme_cancel_tagset" },
	{ 0xfc2367ea, "nvme_change_ctrl_state" },
	{ 0x736da327, "kernel_sendpage" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xc94b3286, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x8109a5c4, "nvme_cancel_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fcabf26, "nvmf_get_address" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x21c2551b, "nvme_disable_ctrl" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x560d5f80, "skb_copy_and_hash_datagram_iter" },
	{ 0x493963fd, "kernel_recvmsg" },
	{ 0xb0ad58d4, "nvme_delete_ctrl" },
	{ 0x6cb7d59d, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x5e95d960, "__nvmf_check_ready" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5f63907, "blk_mq_request_started" },
	{ 0x8a4ae873, "blk_mq_quiesce_queue" },
	{ 0x9391bab, "nvmf_connect_io_queue" },
	{ 0x18cbf39, "blk_mq_unquiesce_queue" },
	{ 0x9e3d3f75, "sock_create" },
	{ 0x4fb8813a, "nvme_start_ctrl" },
	{ 0xcd187846, "kernel_bind" },
	{ 0x66cfea44, "nvme_start_freeze" },
	{ 0xadf874d, "nvme_setup_cmd" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0xce8b4cb5, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0xe5845395, "iov_iter_single_seg_count" },
	{ 0x102cb31a, "nvme_start_queues" },
	{ 0x62046b79, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x14a1e557, "nvme_cancel_admin_tagset" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x2a9c4330, "nvmf_fail_nonready_command" },
	{ 0x15ba8c7c, "nvme_wait_freeze_timeout" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x2b4ecc8b, "nvme_complete_rq" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3d2b4fc0, "nvme_uninit_ctrl" },
	{ 0x82eef861, "crypto_alloc_ahash" },
	{ 0x763db4d4, "nvme_sync_io_queues" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics");


MODULE_INFO(srcversion, "83D11668DD67C3C3BCECBD2");
