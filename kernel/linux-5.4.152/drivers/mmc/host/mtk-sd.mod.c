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
	{ 0xcaa10107, "mmc_gpio_get_ro" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb61b5c41, "mmc_send_tuning" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xad65ce76, "mmc_regulator_set_ocr" },
	{ 0xd54eece7, "mmc_can_gpio_cd" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x371e8a2a, "pinctrl_lookup_state" },
	{ 0x5d7d2894, "devm_pinctrl_get" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xaae6f75a, "__devm_reset_control_get" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x7f22b221, "mmc_regulator_get_supply" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x5bbfc3fa, "mmc_of_parse" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x43ca2f65, "sdio_signal_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2db31c21, "mmc_gpio_get_cd" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd78696a, "pinctrl_select_state" },
	{ 0x83380314, "mmc_regulator_set_vqmmc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmcC*");

MODULE_INFO(srcversion, "497A6E3CF2A958358178F30");
