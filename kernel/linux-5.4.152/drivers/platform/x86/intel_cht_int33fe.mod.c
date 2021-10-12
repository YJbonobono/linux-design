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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x3074b82d, "device_get_named_child_node" },
	{ 0x19ab1532, "pci_get_class" },
	{ 0xeca5d40d, "software_node_find_by_name" },
	{ 0x8db2c04f, "software_node_register_nodes" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf85f58ca, "acpi_dev_gpio_irq_get" },
	{ 0x963d3287, "regulator_put" },
	{ 0xdbfdbbed, "regulator_get_optional" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2343abb0, "i2c_acpi_new_device" },
	{ 0x7b38252c, "device_reprobe" },
	{ 0x7abc9a75, "i2c_for_each_dev" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0xe5ede6d, "software_node_fwnode" },
	{ 0x4bfba5f1, "software_node_unregister_nodes" },
	{ 0x92ed2c1a, "acpi_device_hid" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33FE:*");

MODULE_INFO(srcversion, "37F0ABEF05FE9EFCE5E16F2");
