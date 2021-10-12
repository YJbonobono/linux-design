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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x70969c6, "sas_release_transport" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x66797b9b, "scsi_block_requests" },
	{ 0xeafa57db, "sas_drain_work" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xf8e008c4, "sas_ssp_task_response" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xf737e0a1, "sas_suspend_ha" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb92208a1, "sas_phy_reset" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbbbcc032, "sas_eh_target_reset_handler" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x393f8d6, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2eaa9800, "sas_target_alloc" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6116f1ce, "sas_ioctl" },
	{ 0x9166fada, "strncpy" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7105846d, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe1b66b86, "sas_register_ha" },
	{ 0xdd8b6a23, "sas_alloc_slow_task" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6110bf1f, "sas_resume_ha" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f340c75, "sas_target_destroy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x940aeac0, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xc7a74fa6, "sas_queuecommand" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ee7b76, "sas_remove_host" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x4dc61c4c, "sas_bios_param" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x51b0ed54, "sas_free_task" },
	{ 0xda9ebdb, "sas_prep_resume_ha" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa74358e1, "sas_slave_alloc" },
	{ 0x9601035f, "request_firmware" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x8d2f29f9, "sas_slave_configure" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x4f6e01d1, "sas_domain_attach_transport" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v000011F8d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000400bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000404bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000070bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000071bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000072bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000073bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000080bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000081bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000082bc*sc*i*");

MODULE_INFO(srcversion, "852E54F1FE73BA915BDEDE5");
