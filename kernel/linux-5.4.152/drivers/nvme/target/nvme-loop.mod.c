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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xeea06c33, "nvme_stop_ctrl" },
	{ 0x9b3fb29e, "blk_mq_tagset_busy_iter" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0xaebf4173, "nvmf_register_transport" },
	{ 0xf20d7fd7, "nvme_shutdown_ctrl" },
	{ 0xea178af2, "nvme_set_queue_count" },
	{ 0x1f55378e, "nvme_stop_queues" },
	{ 0x83e3f2e3, "blk_mq_tag_to_rq" },
	{ 0xfd3cb0ad, "nvme_complete_async_event" },
	{ 0xef73ac16, "nvmet_sq_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6edeeb13, "blk_mq_complete_request" },
	{ 0x68b46000, "nvmf_reg_write32" },
	{ 0x239dcbb7, "blk_mq_update_nr_hw_queues" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfadaada8, "nvmet_req_execute" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x224547d, "nvme_enable_ctrl" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x992843e7, "nvmf_connect_admin_queue" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x86889725, "nvme_init_identify" },
	{ 0xeffbf90f, "nvmf_reg_read64" },
	{ 0xceeb4cb1, "nvmet_register_transport" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdc144b1a, "nvmet_req_init" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x7b0a663, "nvme_init_ctrl" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfc2367ea, "nvme_change_ctrl_state" },
	{ 0x8594a898, "nvmet_unregister_transport" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xc94b3286, "nvmf_unregister_transport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b1d602d, "nvme_cleanup_cmd" },
	{ 0x8109a5c4, "nvme_cancel_request" },
	{ 0xd0bd0caa, "nvmet_sq_destroy" },
	{ 0x7fcabf26, "nvmf_get_address" },
	{ 0x58027eea, "blk_rq_map_sg" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb0ad58d4, "nvme_delete_ctrl" },
	{ 0x6cb7d59d, "nvmf_reg_read32" },
	{ 0x5e95d960, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a4ae873, "blk_mq_quiesce_queue" },
	{ 0x9391bab, "nvmf_connect_io_queue" },
	{ 0x18cbf39, "blk_mq_unquiesce_queue" },
	{ 0x4fb8813a, "nvme_start_ctrl" },
	{ 0xadf874d, "nvme_setup_cmd" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x62046b79, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2a9c4330, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x2b4ecc8b, "nvme_complete_rq" },
	{ 0x3d2b4fc0, "nvme_uninit_ctrl" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics,nvmet");


MODULE_INFO(srcversion, "1D4C15C4CFC81F7003CB450");
