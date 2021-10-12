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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x2fbeea43, "ufshcd_init" },
	{ 0xd7d00d18, "ufshcd_alloc_host" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x738a180, "ufshcd_dealloc_host" },
	{ 0x3102f525, "ufshcd_remove" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0xdefb4b32, "ufshcd_shutdown" },
	{ 0x74f31809, "ufshcd_system_resume" },
	{ 0x114618e6, "ufshcd_system_suspend" },
	{ 0xdf837e8a, "ufshcd_runtime_suspend" },
	{ 0xd071eb7e, "ufshcd_runtime_resume" },
	{ 0xeb5573fb, "ufshcd_runtime_idle" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x743c7874, "ufshcd_dme_set_attr" },
	{ 0xddd2d5a2, "ufshcd_dme_get_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-core");

MODULE_ALIAS("pci:v0000144Dd0000C00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B43sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C163255C0742A5B12F9543F");
