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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x73df6006, "sdhci_remove_host" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x81188c30, "match_string" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x17aad2f0, "sdhci_pltfm_init" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1c32cb65, "sdhci_set_power_noreg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58f4f71b, "sdhci_enable_sdio_irq" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x5bbfc3fa, "mmc_of_parse" },
	{ 0x4544be03, "sdhci_pltfm_clk_get_max_clock" },
	{ 0xe1a60dc2, "sdhci_add_host" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xd346338a, "sdhci_execute_tuning" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbf161015, "sdhci_set_clock" },
	{ 0x3a6b69cf, "sdhci_get_property" },
	{ 0x8ac45ad9, "sdhci_set_ios" },
	{ 0xbbcfa31d, "sdhci_runtime_suspend_host" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa80d2090, "sdhci_runtime_resume_host" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xad65ce76, "mmc_regulator_set_ocr" },
	{ 0x3ecea18e, "sdhci_pltfm_free" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x859d6e80, "sdhci_reset" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3c777bda, "sdhci_start_signal_voltage_switch" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x8df714b3, "sdhci_set_bus_width" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm");

MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhciC*");

MODULE_INFO(srcversion, "8179CAC0057C6DB42949771");
