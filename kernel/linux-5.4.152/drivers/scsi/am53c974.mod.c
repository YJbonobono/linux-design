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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x4c17bdda, "scsi_esp_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a29ab38, "scsi_esp_intr" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xc3e3b27a, "scsi_esp_template" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xce4ab6b0, "scsi_esp_cmd" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xf10de535, "ioread8" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1c421ae6, "scsi_esp_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp_scsi");

MODULE_ALIAS("pci:v00001022d00002020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1FB80BCF227603A92B03E1A");
