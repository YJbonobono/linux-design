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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x70969c6, "sas_release_transport" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xeafa57db, "sas_drain_work" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xf8e008c4, "sas_ssp_task_response" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xa92f4769, "sas_request_addr" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x81dc0932, "sas_task_abort" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb92208a1, "sas_phy_reset" },
	{ 0xbbbcc032, "sas_eh_target_reset_handler" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x393f8d6, "sas_get_local_phy" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2eaa9800, "sas_target_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6116f1ce, "sas_ioctl" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x7105846d, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xe1b66b86, "sas_register_ha" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1f340c75, "sas_target_destroy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x940aeac0, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xc7a74fa6, "sas_queuecommand" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x15ee7b76, "sas_remove_host" },
	{ 0x4dc61c4c, "sas_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa74358e1, "sas_slave_alloc" },
	{ 0x9601035f, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d2f29f9, "sas_slave_configure" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x4f6e01d1, "sas_domain_attach_transport" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00009005d00000410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000412sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D1DEFEC34B9670ABB645B5A");
