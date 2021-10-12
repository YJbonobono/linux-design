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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xf9453a86, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa77c2169, "scsi_eh_restore_cmnd" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xf1e046cc, "panic" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x46ba47d9, "blk_queue_bounce_limit" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x16c1bd0a, "scsi_eh_prep_cmnd" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa8bf078f, "scsicam_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pcmcia,scsi_transport_spi");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCDF7E4CCpb35F26476pcA8851D6Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD89C6E8pb35F26476pcA8851D6Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa24BA9738pb3A3C3D20pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa085A850Bpb80A6535Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD89C6E8pb5F9A615Bpc*pd*");

MODULE_INFO(srcversion, "CE495F7A434980790A2D116");
