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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x60edc611, "spi_dv_device" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf1fe970c, "spi_attach_transport" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0x11089ac7, "_ctype" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x491661e8, "pci_set_mwi" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x7c8beeb7, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x76e2037f, "spi_display_xfer_agreement" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xf43ccbff, "pcibios_resource_to_bus" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xc5534d64, "ioread16" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x372f4ca1, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34ECC6A10CAF87113201DAA");
