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
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x77015286, "ata_sff_port_ops" },
	{ 0xb688318e, "ata_cable_40wire" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8b02031b, "ata_host_detach" },
	{ 0xa5efbf4c, "async_synchronize_full" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x2341b7f8, "ata_port_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x72839fb2, "ata_host_alloc" },
	{ 0x1693b589, "devm_ioport_map" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x2c3ae02a, "ata_sff_data_xfer32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x95e29f08, "ata_dev_printk" },
	{ 0x7cb1ef85, "ata_dev_next" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc5534d64, "ioread16" },
	{ 0x240a4470, "ata_dev_pair" },
	{ 0x3f7d924f, "ata_sff_qc_issue" },
	{ 0x383b49bf, "ata_pio_need_iordy" },
	{ 0x3c6f288f, "ata_timing_compute" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xef90f749, "ata_sff_data_xfer" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C714B3C8B30EB33E146C061");
