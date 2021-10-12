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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0x7413e6c0, "pci_bus_add_devices" },
	{ 0xf6bc1d06, "pcie_bus_configure_settings" },
	{ 0xfd14eb2d, "pci_assign_unassigned_bus_resources" },
	{ 0xe67b42dd, "pci_scan_child_bus" },
	{ 0x50a74de2, "add_dma_domain" },
	{ 0x538591a4, "pci_create_root_bus" },
	{ 0x218e600b, "pci_add_resource_offset" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0x3046b869, "pci_msi_create_irq_domain" },
	{ 0x6d818ec7, "x86_vector_domain" },
	{ 0x11cafe4f, "__irq_domain_alloc_fwnode" },
	{ 0x2f977c1d, "pci_find_next_bus" },
	{ 0x565c8b0a, "init_srcu_struct" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x71044428, "pci_msix_vec_count" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x7e7f67b3, "irq_domain_set_info" },
	{ 0xb8807ce4, "handle_untracked_irq" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x46b552a8, "msi_desc_to_pci_dev" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xf6a55bda, "dma_mmap_attrs" },
	{ 0xdbe28db9, "dma_get_sgtable_attrs" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x1eb1bd3c, "dma_direct_sync_sg_for_cpu" },
	{ 0xec43c30e, "dma_direct_sync_sg_for_device" },
	{ 0x3f31134a, "dma_supported" },
	{ 0xf83f6a04, "dma_get_required_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xd9fe373d, "irq_domain_free_fwnode" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0xa9a505f, "del_dma_domain" },
	{ 0xf47e020f, "cleanup_srcu_struct" },
	{ 0x6ba81357, "pci_remove_root_bus" },
	{ 0x3a4dfadd, "pci_stop_root_bus" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000201Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A0Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29576FB15DC9F8343DE6F7F");
