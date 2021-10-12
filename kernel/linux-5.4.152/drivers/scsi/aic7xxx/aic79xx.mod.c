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
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56aab15, "scsi_device_lookup_by_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x60edc611, "spi_dv_device" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x349cba85, "strchr" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x66797b9b, "scsi_block_requests" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x1db69593, "scsi_unblock_requests" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf1fe970c, "spi_attach_transport" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf83f6a04, "dma_get_required_mask" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0x1208a414, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7c8beeb7, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x76e2037f, "spi_display_xfer_agreement" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x2ecbf543, "scsi_report_bus_reset" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2ae1d301, "scsi_report_device_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x372f4ca1, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00009005d00008000sv00009005sd00000060bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008000sv00009005sd00000060bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008080sv00009005sd00000060bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008080sv00009005sd00000060bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000045bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000045bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000045bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000045bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008012sv00009005sd00000042bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008012sv00009005sd00000042bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008092sv00009005sd00000042bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008092sv00009005sd00000042bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008013sv00009005sd00000043bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008013sv00009005sd00000043bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008093sv00009005sd00000043bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008093sv00009005sd00000043bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008014sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008014sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008094sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008094sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008010sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008010sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008090sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008090sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008015sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008015sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008095sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008095sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008016sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008016sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008096sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008096sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008000sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008000sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008080sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008080sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008081sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008081sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008002sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008002sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008082sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008082sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008003sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008003sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008083sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008083sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008004sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008004sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008084sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008084sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008005sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008005sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008085sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008085sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008086sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008086sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008007sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008007sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008087sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008087sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008088sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008088sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008089sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008089sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008010sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008090sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008090sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008012sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008012sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008092sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008092sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008013sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008013sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008093sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008093sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008014sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008014sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008094sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008094sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008015sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008015sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008095sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008095sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008016sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008016sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008096sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008096sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008098sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008098sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008099sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008099sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Fsv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "6AB02217F3E0A3BAB6816E7");
