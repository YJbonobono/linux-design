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
	{ 0x19c140f8, "mptscsih_host_attrs" },
	{ 0x46c7a720, "mptscsih_show_info" },
	{ 0x5d4240b4, "mptscsih_bios_param" },
	{ 0xd1e791bf, "mptscsih_change_queue_depth" },
	{ 0xcb849954, "mptscsih_slave_destroy" },
	{ 0xd7b0371a, "mptscsih_host_reset" },
	{ 0xc1612c22, "mptscsih_dev_reset" },
	{ 0x2bd11be8, "mptscsih_abort" },
	{ 0xb13b4c63, "mptscsih_info" },
	{ 0xb91a3cbe, "mptscsih_resume" },
	{ 0x1708b7df, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x70969c6, "sas_release_transport" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x16981a49, "mpt_reset_register" },
	{ 0xd6744089, "mpt_event_register" },
	{ 0xba4c4c8b, "mptscsih_scandv_complete" },
	{ 0x2b11190d, "mptscsih_taskmgmt_complete" },
	{ 0xde456b20, "mpt_register" },
	{ 0x7bd25860, "mptscsih_io_done" },
	{ 0x1e29b734, "sas_attach_transport" },
	{ 0xed539080, "mpt_GetIocState" },
	{ 0xb10d845, "mptscsih_get_scsi_lookup" },
	{ 0x893a26f7, "scsi_track_queue_full" },
	{ 0x63ff0b2c, "mpt_raid_phys_disk_pg1" },
	{ 0xdf032d92, "mpt_raid_phys_disk_get_num_paths" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0xb7f2daf, "mpt_findImVolumes" },
	{ 0x8314a1a9, "mptbase_sas_persist_operation" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x328d3ccb, "mptscsih_flush_running_cmds" },
	{ 0xe6c73946, "mpt_attach" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x821bc86b, "starget_for_each_device" },
	{ 0x9166fada, "strncpy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3938d800, "scsi_is_sas_rphy" },
	{ 0xf938cc58, "sas_expander_alloc" },
	{ 0x3afde50e, "sas_phy_free" },
	{ 0x9ac254ec, "sas_port_add" },
	{ 0xe571f5bd, "sas_port_alloc_num" },
	{ 0x9147b46, "sas_phy_alloc" },
	{ 0x13117321, "sas_port_mark_backlink" },
	{ 0xe0f8f4b8, "sas_phy_add" },
	{ 0x27a23e0, "sas_port_add_phy" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x37c7ad2e, "bsg_job_done" },
	{ 0xedd9c0d3, "sas_port_delete" },
	{ 0xc2339c92, "mpt_detach" },
	{ 0x78034b2b, "mptscsih_remove" },
	{ 0x15ee7b76, "sas_remove_host" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xd6ba00ed, "mptscsih_slave_configure" },
	{ 0xae509074, "sas_read_port_mode_page" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x53dadd0f, "mptscsih_ioc_reset" },
	{ 0xf9453a86, "scsi_print_command" },
	{ 0x10736115, "mptscsih_qcmd" },
	{ 0xeeb447f, "mpt_raid_phys_disk_pg0" },
	{ 0x785b9924, "sas_rphy_free" },
	{ 0xf2d9bde4, "sas_rphy_add" },
	{ 0xc36fcf4e, "sas_end_device_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8aac7c27, "mptscsih_taskmgmt_response_code" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5415669c, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x3de689cc, "mpt_put_msg_frame_hi_pri" },
	{ 0x3420b911, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0xc94ac6ca, "scsi_device_set_state" },
	{ 0x7b38252c, "device_reprobe" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29361773, "complete" },
	{ 0xbe09817a, "mpt_Soft_Hard_ResetHandler" },
	{ 0x8d3ff91, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x88a32e80, "mpt_put_msg_frame" },
	{ 0x574259aa, "mpt_get_msg_frame" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x38c6157b, "sas_port_delete_phy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x5cc765f2, "mpt_config" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0x7ae9a28f, "mptscsih_raid_id_to_num" },
	{ 0x6db684c6, "mptscsih_is_phys_disk" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_sas");

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B28ED34A9501F84023B5850");
