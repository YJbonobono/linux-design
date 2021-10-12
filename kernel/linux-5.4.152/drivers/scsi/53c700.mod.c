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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x60edc611, "spi_dv_device" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x83e3f2e3, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0xf1fe970c, "spi_attach_transport" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xf9453a86, "scsi_print_command" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xf60dce14, "__scsi_device_lookup" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb9bf63ad, "spi_populate_tag_msg" },
	{ 0x6e1cb6be, "spi_schedule_dv_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7c8beeb7, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x76e2037f, "spi_display_xfer_agreement" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x2ecbf543, "scsi_report_bus_reset" },
	{ 0xf3aaac4f, "dma_cache_sync" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x372f4ca1, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");


MODULE_INFO(srcversion, "1CE125EFE49D9760585D259");
