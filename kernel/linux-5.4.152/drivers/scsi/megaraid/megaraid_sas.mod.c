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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x65815fbc, "blk_queue_rq_timeout" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0xd94b4ae3, "pci_irq_get_affinity" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xffb67ffb, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xf9453a86, "scsi_print_command" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x52296d4a, "scsi_host_busy" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0xbf499271, "blk_queue_update_dma_alignment" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcf7f2e38, "pci_cfg_access_lock" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xcf2a6966, "up" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x6a53c86d, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6e1be8c6, "pci_release_selected_regions" },
	{ 0x6c37202d, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x6492e6ce, "pci_cfg_access_unlock" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3b223a39, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001000d00000411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000002Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD92AE01B021D66D26DEDA2");
