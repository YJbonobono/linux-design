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
	{ 0x50877b9, "dmi_first_match" },
	{ 0x815588a6, "clk_enable" },
	{ 0xcff72bbd, "stmmac_dvr_probe" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x77c5d481, "stmmac_resume" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc53e0dae, "pcim_iounmap_regions" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xebdb1357, "clk_register_fixed_rate" },
	{ 0x5990473b, "stmmac_dvr_remove" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xde96a215, "stmmac_suspend" },
	{ 0x52252316, "clk_unregister_fixed_rate" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "stmmac");

MODULE_ALIAS("pci:v00000700d00001108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad0000CC09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000937sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d00007102sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F01A4F0A8A6CDDA61CF5088");
