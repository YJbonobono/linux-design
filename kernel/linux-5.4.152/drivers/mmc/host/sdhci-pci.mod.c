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
	{ 0xf46a785f, "cqhci_resume" },
	{ 0xe83f794e, "sdhci_enable_v4_mode" },
	{ 0x73df6006, "sdhci_remove_host" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x76535008, "sdhci_set_power" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x97410331, "sdhci_cqe_enable" },
	{ 0xb61b5c41, "mmc_send_tuning" },
	{ 0xa811d0e3, "sdhci_alloc_host" },
	{ 0x4b9c3a43, "sdhci_resume_host" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7c6d70c5, "sdhci_cleanup_host" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xb6e7ee23, "dev_pm_qos_hide_latency_tolerance" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbfb9dc69, "debugfs_create_x32" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0xc521b8f0, "acpi_device_fix_up_power" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0xe1a60dc2, "sdhci_add_host" },
	{ 0x35e9d90, "sdhci_free_host" },
	{ 0xd18c1e95, "cqhci_deactivate" },
	{ 0xb9c9c36d, "devm_gpio_free" },
	{ 0xd346338a, "sdhci_execute_tuning" },
	{ 0x1477391, "sdhci_start_tuning" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbf161015, "sdhci_set_clock" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xe30d4a47, "sdhci_abort_tuning" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x72bc3495, "sdhci_reset_tuning" },
	{ 0xdc6f43a8, "__sdhci_add_host" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb5cea217, "sdhci_cqe_disable" },
	{ 0x5f8a7318, "sdhci_dumpregs" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x11826ad6, "sdhci_setup_host" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0xbbcfa31d, "sdhci_runtime_suspend_host" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xa80d2090, "sdhci_runtime_resume_host" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0xaf7c85d8, "device_wakeup_disable" },
	{ 0x5cfd0c68, "sdhci_suspend_host" },
	{ 0x2db31c21, "mmc_gpio_get_cd" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcb15eee9, "sdhci_pci_get_data" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9312dc4b, "mmc_gpio_set_cd_wake" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xb22c2bc2, "sdhci_calc_clk" },
	{ 0x859d6e80, "sdhci_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xc2ab647f, "cqhci_irq" },
	{ 0xa2ecd579, "sdhci_set_uhs_signaling" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xc68e35b1, "dev_pm_qos_expose_latency_tolerance" },
	{ 0xd06873f3, "cqhci_init" },
	{ 0xc6c9fe29, "mmc_gpiod_request_cd" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x1d864272, "devm_gpio_request" },
	{ 0x3c777bda, "sdhci_start_signal_voltage_switch" },
	{ 0x8c7657a3, "sdhci_cqe_irq" },
	{ 0xd6a8eaae, "sdhci_send_tuning" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x8df714b3, "sdhci_set_bus_width" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xa44d89e, "sdhci_end_tuning" },
};

MODULE_INFO(depends, "cqhci,sdhci");

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv00001093sd00007884bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002294sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002295sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016E6d00000670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000C202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc08sc05i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "075BAF817131D9A16BA7EB9");
