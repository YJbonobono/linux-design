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
	{ 0xd7b0371a, "mptscsih_host_reset" },
	{ 0xa09727c4, "mptscsih_bus_reset" },
	{ 0xc1612c22, "mptscsih_dev_reset" },
	{ 0x2bd11be8, "mptscsih_abort" },
	{ 0xb13b4c63, "mptscsih_info" },
	{ 0xc0b0d8e3, "mptscsih_shutdown" },
	{ 0x1708b7df, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x7c8beeb7, "spi_release_transport" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x16981a49, "mpt_reset_register" },
	{ 0xd6744089, "mpt_event_register" },
	{ 0xba4c4c8b, "mptscsih_scandv_complete" },
	{ 0x2b11190d, "mptscsih_taskmgmt_complete" },
	{ 0xde456b20, "mpt_register" },
	{ 0x7bd25860, "mptscsih_io_done" },
	{ 0xf1fe970c, "spi_attach_transport" },
	{ 0xf84943e5, "mptscsih_IssueTaskMgmt" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xe6c73946, "mpt_attach" },
	{ 0x7ae9a28f, "mptscsih_raid_id_to_num" },
	{ 0xcb849954, "mptscsih_slave_destroy" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0x56aab15, "scsi_device_lookup_by_target" },
	{ 0x53dadd0f, "mptscsih_ioc_reset" },
	{ 0xd6ba00ed, "mptscsih_slave_configure" },
	{ 0x77df663a, "scsi_scan_target" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0xb7f2daf, "mpt_findImVolumes" },
	{ 0x76e2037f, "spi_display_xfer_agreement" },
	{ 0x60edc611, "spi_dv_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x5cc765f2, "mpt_config" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xce772c51, "mptscsih_event_process" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9453a86, "scsi_print_command" },
	{ 0x10736115, "mptscsih_qcmd" },
	{ 0x6db684c6, "mptscsih_is_phys_disk" },
	{ 0x78034b2b, "mptscsih_remove" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xb91a3cbe, "mptscsih_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8d3ff91, "mpt_free_msg_frame" },
	{ 0xad446ad2, "mpt_HardResetHandler" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x88a32e80, "mpt_put_msg_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x574259aa, "mpt_get_msg_frame" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA585F517EE6F59C8BD3064");
