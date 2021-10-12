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
	{ 0xa2ecd579, "sdhci_set_uhs_signaling" },
	{ 0x8df714b3, "sdhci_set_bus_width" },
	{ 0xbf161015, "sdhci_set_clock" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x73df6006, "sdhci_remove_host" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x7c6d70c5, "sdhci_cleanup_host" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x35e9d90, "sdhci_free_host" },
	{ 0xdc6f43a8, "__sdhci_add_host" },
	{ 0x11826ad6, "sdhci_setup_host" },
	{ 0xc6c9fe29, "mmc_gpiod_request_cd" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0xa811d0e3, "sdhci_alloc_host" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xc521b8f0, "acpi_device_fix_up_power" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3c777bda, "sdhci_start_signal_voltage_switch" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xd346338a, "sdhci_execute_tuning" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2db31c21, "mmc_gpio_get_cd" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92ed2c1a, "acpi_device_hid" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xe753b074, "__sdhci_read_caps" },
	{ 0x859d6e80, "sdhci_reset" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x8ac45ad9, "sdhci_set_ios" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5cfd0c68, "sdhci_suspend_host" },
	{ 0x4b9c3a43, "sdhci_resume_host" },
	{ 0xbbcfa31d, "sdhci_runtime_suspend_host" },
	{ 0xa80d2090, "sdhci_runtime_resume_host" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci");

MODULE_ALIAS("acpi*:80865ACA:*");
MODULE_ALIAS("acpi*:80865ACC:*");
MODULE_ALIAS("acpi*:80865AD0:*");
MODULE_ALIAS("acpi*:80860F14:*");
MODULE_ALIAS("acpi*:80860F16:*");
MODULE_ALIAS("acpi*:INT33BB:*");
MODULE_ALIAS("acpi*:INT33C6:*");
MODULE_ALIAS("acpi*:INT3436:*");
MODULE_ALIAS("acpi*:INT344D:*");
MODULE_ALIAS("acpi*:PNP0D40:*");
MODULE_ALIAS("acpi*:QCOM8051:*");
MODULE_ALIAS("acpi*:QCOM8052:*");
MODULE_ALIAS("acpi*:AMDI0040:*");

MODULE_INFO(srcversion, "5B5B5541FFE5B36F3757D6C");
