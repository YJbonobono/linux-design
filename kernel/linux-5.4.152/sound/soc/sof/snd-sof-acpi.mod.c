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
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xaabb51a4, "byt_chip_info" },
	{ 0x2eed2546, "snd_sof_suspend" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xe45e1b7f, "snd_sof_device_probe" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x5e25cf8d, "cht_chip_info" },
	{ 0x5056f6bb, "snd_sof_resume" },
	{ 0x20ff8c9e, "snd_sof_runtime_suspend" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7af7766b, "sof_byt_ops" },
	{ 0x2ea34b42, "snd_sof_device_remove" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x99771cb3, "snd_sof_runtime_resume" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a3782a9, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x77f4e18f, "sof_cht_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b641f39, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbc307061, "snd_sof_runtime_idle" },
	{ 0xcfe6df96, "sof_xtensa_arch_ops" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "snd-sof-intel-byt,snd-sof,snd-soc-acpi,snd-soc-acpi-intel-match,snd-sof-xtensa-dsp");

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "DA00605F2B809569FFC3CC7");
