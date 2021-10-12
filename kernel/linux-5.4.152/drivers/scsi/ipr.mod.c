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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x5349df18, "ata_sas_port_stop" },
	{ 0x72a9b748, "ata_sas_port_start" },
	{ 0x79175dbd, "ata_noop_qc_prep" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x77bc13a0, "strim" },
	{ 0x6a03751f, "sgl_free_order" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xeb9e913d, "sgl_alloc_order" },
	{ 0x9601035f, "request_firmware" },
	{ 0x349cba85, "strchr" },
	{ 0x7c5f0449, "ata_sas_port_destroy" },
	{ 0x2ae1d301, "scsi_report_device_reset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1db69593, "scsi_unblock_requests" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xb80ba17f, "ata_std_error_handler" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xff85df97, "sysfs_create_bin_file" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xbfa0d491, "ata_host_init" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xf18898ab, "sysfs_remove_bin_file" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xfb578fc5, "memset" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0xc6cbbc89, "capable" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x15af7f4, "system_state" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x66797b9b, "scsi_block_requests" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x37ad49e4, "ata_sas_slave_configure" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0x65815fbc, "blk_queue_rq_timeout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x34fe9cfd, "pci_set_pcie_reset_state" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0x1cbc34b6, "scsi_device_get" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x777cfbb2, "ata_sas_scsi_ioctl" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0xca49608b, "ata_sas_queuecmd" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0x71d5cfd0, "ata_sas_sync_probe" },
	{ 0xa36180e0, "ata_sas_port_init" },
	{ 0x5a16a7c, "ata_sas_port_alloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x754d539c, "strlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6492e6ce, "pci_cfg_access_unlock" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x29361773, "complete" },
	{ 0x5bd8bdf, "ata_qc_complete" },
	{ 0x1f83134a, "pci_cfg_access_trylock" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ecbf543, "scsi_report_bus_reset" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000266bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000278bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D4bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002BEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002C0bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000030Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000030Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000033Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000035Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd00000360bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd00000264bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002BFbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002D5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002C3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000033Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000356bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000035Fbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000352bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000353bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000354bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000033Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000355bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000357bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Ebc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FBbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FFbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000046Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004CAbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000474bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000475bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000499bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C7bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C8bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C9bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FBbc*sc*i*");

MODULE_INFO(srcversion, "958A3652CE209CF3CDDCEFA");
