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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf85f58ca, "acpi_dev_gpio_irq_get" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x754d539c, "strlen" },
	{ 0x2343abb0, "i2c_acpi_new_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x9d24b9dc, "acpi_dev_get_resources" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x60806523, "i2c_acpi_get_i2c_resource" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BSG1160:*");
MODULE_ALIAS("acpi*:BSG2150:*");

MODULE_INFO(srcversion, "44B782EA6AFAB563E2B292E");
