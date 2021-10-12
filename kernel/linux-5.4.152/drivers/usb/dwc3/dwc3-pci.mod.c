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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7d59dd46, "pm_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xa80a6d9b, "gpiod_get_optional" },
	{ 0x5e0b3f66, "gpiod_add_lookup_table" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0xbb6afdb1, "pcim_iounmap" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xe6852960, "platform_device_put" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x441518ac, "platform_device_add_properties" },
	{ 0xabe384a1, "set_primary_fwnode" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc219f6a1, "gpiod_remove_lookup_table" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000022B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F37sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000119Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007912sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B43B3CEEFA677964F8A896F");
