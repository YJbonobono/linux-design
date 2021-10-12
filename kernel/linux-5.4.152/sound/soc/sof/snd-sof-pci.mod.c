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
	{ 0x61cf31b7, "icl_chip_info" },
	{ 0x8e65b4ad, "sof_apl_ops" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x2eed2546, "snd_sof_suspend" },
	{ 0x1fc764bd, "snd_soc_acpi_intel_cnl_machines" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0xe45e1b7f, "snd_sof_device_probe" },
	{ 0xe7189cb2, "sof_tng_ops" },
	{ 0xacf31f39, "ehl_chip_info" },
	{ 0x24a1f9bd, "snd_soc_acpi_intel_icl_machines" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xf4d48b52, "cnl_chip_info" },
	{ 0x5056f6bb, "snd_sof_resume" },
	{ 0x20ff8c9e, "snd_sof_runtime_suspend" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x706e690b, "snd_soc_acpi_intel_glk_machines" },
	{ 0x2ea34b42, "snd_sof_device_remove" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0x5b5be595, "apl_chip_info" },
	{ 0xa63cab4c, "snd_soc_acpi_intel_bxt_machines" },
	{ 0x99771cb3, "snd_sof_runtime_resume" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfba15443, "sof_cnl_ops" },
	{ 0xf57f8f55, "snd_soc_acpi_intel_tgl_machines" },
	{ 0xeb62ba51, "snd_soc_acpi_intel_ehl_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbc307061, "snd_sof_runtime_idle" },
	{ 0x8639b9f0, "tng_chip_info" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xcfe6df96, "sof_xtensa_arch_ops" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x703e1716, "tgl_chip_info" },
};

MODULE_INFO(depends, "snd-sof-intel-hda-common,snd-sof,snd-soc-acpi-intel-match,snd-sof-intel-byt,snd-soc-acpi,snd-sof-xtensa-dsp");

MODULE_ALIAS("pci:v00008086d0000119Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B55sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6DC9FB25794116C52BC57B5");
