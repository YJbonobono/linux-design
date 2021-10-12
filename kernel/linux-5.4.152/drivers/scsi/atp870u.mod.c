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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb177d101, "seq_printf" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b6e0761, "scsi_dma_unmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x87b8798d, "sg_next" },
	{ 0x372f4ca1, "scsi_dma_map" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001191d0000808Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008060sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BCFBB18706F2082E70F0EED");
