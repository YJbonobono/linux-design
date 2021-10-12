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
	{ 0xedd6246, "sas_change_queue_depth" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x70969c6, "sas_release_transport" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xeafa57db, "sas_drain_work" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xf8e008c4, "sas_ssp_task_response" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xf737e0a1, "sas_suspend_ha" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x81dc0932, "sas_task_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x49e67e27, "pci_biosrom_size" },
	{ 0xb92208a1, "sas_phy_reset" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbbbcc032, "sas_eh_target_reset_handler" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x393f8d6, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a8e3d34, "try_test_sas_gpio_gp_bit" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2eaa9800, "sas_target_alloc" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6116f1ce, "sas_ioctl" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa0f493d9, "efi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7105846d, "sas_unregister_ha" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe1b66b86, "sas_register_ha" },
	{ 0x6de879f, "pci_map_biosrom" },
	{ 0xb96ed686, "sas_eh_abort_handler" },
	{ 0x6110bf1f, "sas_resume_ha" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1f340c75, "sas_target_destroy" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x940aeac0, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc7a74fa6, "sas_queuecommand" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x428492d, "sas_ata_schedule_reset" },
	{ 0x15ee7b76, "sas_remove_host" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4dc61c4c, "sas_bios_param" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xda9ebdb, "sas_prep_resume_ha" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa74358e1, "sas_slave_alloc" },
	{ 0x9601035f, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x326425ca, "pci_unmap_biosrom" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d2f29f9, "sas_slave_configure" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x4f6e01d1, "sas_domain_attach_transport" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CADE0A235448805F290D8DE");
