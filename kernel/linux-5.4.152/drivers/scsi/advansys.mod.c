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
	{ 0x1ee2b308, "isa_unregister_driver" },
	{ 0x2d6c2220, "eisa_driver_unregister" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x1a7b45e0, "eisa_driver_register" },
	{ 0x4736d750, "isa_register_driver" },
	{ 0x85bd1608, "__request_region" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x69acdf38, "memcpy" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x83e3f2e3, "blk_mq_tag_to_rq" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0xc5850110, "printk" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x52296d4a, "scsi_host_busy" },
	{ 0x1208a414, "seq_putc" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010CDd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002700sv*sd*bc*sc*i*");
MODULE_ALIAS("eisa:sABP7401*");
MODULE_ALIAS("eisa:sABP7501*");

MODULE_INFO(srcversion, "A959299C15F7FD6417024C3");
