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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9309a4da, "ufshcd_dwc_link_startup_notify" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fcad7a4, "tc_dwc_g210_config_20_bit" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x2fbeea43, "ufshcd_init" },
	{ 0xd7d00d18, "ufshcd_alloc_host" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x1f8ba4f8, "tc_dwc_g210_config_40_bit" },
	{ 0x3102f525, "ufshcd_remove" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0xdefb4b32, "ufshcd_shutdown" },
	{ 0x114618e6, "ufshcd_system_suspend" },
	{ 0x74f31809, "ufshcd_system_resume" },
	{ 0xdf837e8a, "ufshcd_runtime_suspend" },
	{ 0xd071eb7e, "ufshcd_runtime_resume" },
	{ 0xeb5573fb, "ufshcd_runtime_idle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-dwc,tc-dwc-g210,ufshcd-core");

MODULE_ALIAS("pci:v000016C3d0000B101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000B102sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5BBD207610458068EDF8764");
