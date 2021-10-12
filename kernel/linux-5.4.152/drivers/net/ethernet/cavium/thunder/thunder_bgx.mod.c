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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0xc5850110, "printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x36f49bd9, "fwnode_get_mac_address" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xe258a8c8, "pci_request_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4fe141ac, "phy_connect_direct" },
	{ 0x25b180af, "pci_free_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4f739dc0, "xcv_setup_link" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13912e4b, "xcv_init_hw" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "thunder_xcv");

MODULE_ALIAS("pci:v0000177Dd0000A026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000177Dd0000A054sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D16BF83C65A2F63E1A117F");
