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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x7d5e3e99, "intel_soc_dts_iosf_init" },
	{ 0xd8a14513, "__cpuhp_setup_state" },
	{ 0x296d20ec, "powercap_register_control_type" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xd49ab003, "rapl_add_package" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x667f43dc, "thermal_zone_device_update" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xebc4dc41, "sysfs_create_file_ns" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9c6a69f0, "rapl_remove_package" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x23924cc9, "rapl_find_package_domain" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x324f4314, "int340x_thermal_zone_add" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc01fefd1, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeec5619c, "powercap_unregister_control_type" },
	{ 0x8fc9e71a, "__cpuhp_remove_state" },
	{ 0xf9840dbc, "intel_soc_dts_iosf_exit" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe8c2beb5, "sysfs_remove_file_ns" },
	{ 0xa5e841e1, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_soc_dts_iosf,intel_rapl_common,int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3401:*");
MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E83sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D06F45EDBCF701BF08AA67D");
