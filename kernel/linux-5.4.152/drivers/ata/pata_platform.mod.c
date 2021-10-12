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
	{ 0x72839fb2, "ata_host_alloc" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0x16beaa8d, "ata_platform_remove_one" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0x77015286, "ata_sff_port_ops" },
	{ 0x2c3ae02a, "ata_sff_data_xfer32" },
	{ 0x2341b7f8, "ata_port_desc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x7cb1ef85, "ata_dev_next" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x95e29f08, "ata_dev_printk" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xef90f749, "ata_sff_data_xfer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0xa3614d48, "ata_cable_unknown" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x1693b589, "devm_ioport_map" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B35F676C830137BFDB06626");
