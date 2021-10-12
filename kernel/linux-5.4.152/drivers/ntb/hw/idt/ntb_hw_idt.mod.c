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
	{ 0xb4facf8b, "simple_open" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xc5850110, "printk" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x10ca65ff, "ntb_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xe9785de7, "pcim_iomap_regions_request_all" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xce03249, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0x7d6898a8, "pci_enable_pcie_error_reporting" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x27916597, "ntb_unregister_device" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x3ed8cdc4, "pci_disable_pcie_error_reporting" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf43ccbff, "pcibios_resource_to_bus" },
	{ 0x259f2a9c, "ntb_msg_event" },
	{ 0xbe86e725, "ntb_db_event" },
	{ 0x9bc3cd, "ntb_link_event" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v0000111Dd00008091sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Fsv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008088sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008092sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008090sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Esv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Csv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Asv*sd*bc06sc80i*");

MODULE_INFO(srcversion, "E85DC9AF68EAB9ADCEFD735");
