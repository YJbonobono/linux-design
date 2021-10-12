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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc020a1f9, "nvme_get_features" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0xa8db5bd, "nvme_reset_ctrl" },
	{ 0x52dd0c09, "param_get_int" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x72ce27ee, "pci_sriov_configure_simple" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0x935b8498, "nvme_wait_reset" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xeea06c33, "nvme_stop_ctrl" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x79ae14cf, "nvme_unfreeze" },
	{ 0x9b3fb29e, "blk_mq_tagset_busy_iter" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x514bcbac, "nvme_set_features" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xf20d7fd7, "nvme_shutdown_ctrl" },
	{ 0x56470118, "__warn_printk" },
	{ 0xea178af2, "nvme_set_queue_count" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x1f55378e, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x83e3f2e3, "blk_mq_tag_to_rq" },
	{ 0xfd3cb0ad, "nvme_complete_async_event" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x418222c5, "nvme_kill_queues" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x58af3961, "param_set_int" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x6edeeb13, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x239dcbb7, "blk_mq_update_nr_hw_queues" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x7d6898a8, "pci_enable_pcie_error_reporting" },
	{ 0x36057eb0, "nvme_try_sched_reset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x224547d, "nvme_enable_ctrl" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x1320e655, "blk_put_queue" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0x8d817ccf, "sysfs_remove_file_from_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x86889725, "nvme_init_identify" },
	{ 0xde5454ac, "nvme_remove_namespaces" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x131ae927, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x103eea0, "blk_execute_rq_nowait" },
	{ 0x1883b01e, "pci_load_saved_state" },
	{ 0xe258a8c8, "pci_request_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x42aca45d, "blk_get_queue" },
	{ 0x7b0a663, "nvme_init_ctrl" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0xfc2367ea, "nvme_change_ctrl_state" },
	{ 0x1374ef2d, "blk_mq_free_request" },
	{ 0x54085d0d, "__tracepoint_nvme_sq" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0x25b180af, "pci_free_irq" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x14ae7bfc, "dma_max_mapping_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4fc7846, "nvme_sync_queues" },
	{ 0x1b1d602d, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8109a5c4, "nvme_cancel_request" },
	{ 0x6c563921, "nvme_wait_freeze" },
	{ 0x5188a9eb, "blk_mq_pci_map_queues" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x58027eea, "blk_rq_map_sg" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x944c43f, "node_states" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x21c2551b, "nvme_disable_ctrl" },
	{ 0x3750a460, "get_device" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x3ed8cdc4, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x8a4ae873, "blk_mq_quiesce_queue" },
	{ 0xbb1ec0da, "nvme_submit_sync_cmd" },
	{ 0x18cbf39, "blk_mq_unquiesce_queue" },
	{ 0xedc03953, "iounmap" },
	{ 0x4fb8813a, "nvme_start_ctrl" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x66cfea44, "nvme_start_freeze" },
	{ 0x96848186, "scnprintf" },
	{ 0xadf874d, "nvme_setup_cmd" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xcf912890, "nvme_alloc_request" },
	{ 0x102cb31a, "nvme_start_queues" },
	{ 0x62046b79, "blk_mq_tagset_wait_completed_request" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6a53c86d, "pci_enable_device_mem" },
	{ 0x15ba8c7c, "nvme_wait_freeze_timeout" },
	{ 0x6e1be8c6, "pci_release_selected_regions" },
	{ 0x6c37202d, "pci_request_selected_regions" },
	{ 0x2b4ecc8b, "nvme_complete_rq" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x3d2b4fc0, "nvme_uninit_ctrl" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xcc1d8f04, "pcie_aspm_enabled" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xf105fed9, "__do_once_done" },
};

MODULE_INFO(depends, "nvme-core");

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00001092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00001F1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd00001504sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v00002646d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A8A96D18AACE877B748B245");
