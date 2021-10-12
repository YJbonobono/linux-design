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
	{ 0xc166ae1c, "phy_init" },
	{ 0x3cb783bf, "ata_dummy_port_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x815588a6, "clk_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x5e17a3a9, "ahci_save_initial_config" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x6979d6cc, "ata_host_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x95f27e40, "ahci_reset_em" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0x1cdabec, "phy_set_mode_ext" },
	{ 0x2341b7f8, "ata_port_desc" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0xd758ff97, "phy_power_off" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xae37e53a, "ahci_print_info" },
	{ 0xbd0c8936, "devres_open_group" },
	{ 0x6f8257de, "phy_power_on" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x38ca80e5, "ahci_reset_controller" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xc57b77a7, "phy_exit" },
	{ 0x5b3c2669, "ahci_host_activate" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe7c3af9, "ahci_init_controller" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79ee2cdb, "devm_reset_control_array_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x2a2c7ba0, "ahci_set_em_messages" },
	{ 0xfedd2163, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x963d3287, "regulator_put" },
	{ 0x2617104d, "devm_of_phy_get" },
	{ 0x2247eb89, "devres_remove_group" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x9e6c47a8, "regulator_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4b961816, "devres_release_group" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x5d19df1a, "ahci_ops" },
};

MODULE_INFO(depends, "libahci");


MODULE_INFO(srcversion, "E95884F42BF2F99D4E7C225");
