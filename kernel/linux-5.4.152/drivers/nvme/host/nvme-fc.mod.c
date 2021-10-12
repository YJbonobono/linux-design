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
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xa8db5bd, "nvme_reset_ctrl" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xeea06c33, "nvme_stop_ctrl" },
	{ 0x9b3fb29e, "blk_mq_tagset_busy_iter" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0xaebf4173, "nvmf_register_transport" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xea178af2, "nvme_set_queue_count" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x1f55378e, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfd3cb0ad, "nvme_complete_async_event" },
	{ 0x1a08d751, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6edeeb13, "blk_mq_complete_request" },
	{ 0x68b46000, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x239dcbb7, "blk_mq_update_nr_hw_queues" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x224547d, "nvme_enable_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x992843e7, "nvmf_connect_admin_queue" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x86889725, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeffbf90f, "nvmf_reg_read64" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x94567929, "__class_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x66cfd587, "kobject_uevent_env" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7b0a663, "nvme_init_ctrl" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfc2367ea, "nvme_change_ctrl_state" },
	{ 0xa916b694, "strnlen" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xc94b3286, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1b1d602d, "nvme_cleanup_cmd" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fcabf26, "nvmf_get_address" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x58027eea, "blk_rq_map_sg" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0xb0ad58d4, "nvme_delete_ctrl" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6cb7d59d, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5e95d960, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x8a4ae873, "blk_mq_quiesce_queue" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x9391bab, "nvmf_connect_io_queue" },
	{ 0x18cbf39, "blk_mq_unquiesce_queue" },
	{ 0x4fb8813a, "nvme_start_ctrl" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0xadf874d, "nvme_setup_cmd" },
	{ 0xce8b4cb5, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x102cb31a, "nvme_start_queues" },
	{ 0x62046b79, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a9c4330, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x2b4ecc8b, "nvme_complete_rq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3d2b4fc0, "nvme_uninit_ctrl" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics");


MODULE_INFO(srcversion, "B89D4A900F02D55E67099CD");
