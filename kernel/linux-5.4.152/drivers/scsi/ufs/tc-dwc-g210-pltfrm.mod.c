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
	{ 0x7fcad7a4, "tc_dwc_g210_config_20_bit" },
	{ 0x1f8ba4f8, "tc_dwc_g210_config_40_bit" },
	{ 0x9309a4da, "ufshcd_dwc_link_startup_notify" },
	{ 0x1180edeb, "ufshcd_pltfrm_runtime_idle" },
	{ 0xcdd0d7b8, "ufshcd_pltfrm_runtime_resume" },
	{ 0xa5f48381, "ufshcd_pltfrm_runtime_suspend" },
	{ 0x2f1b4358, "ufshcd_pltfrm_resume" },
	{ 0x51caa6d, "ufshcd_pltfrm_suspend" },
	{ 0x1595ca71, "ufshcd_pltfrm_shutdown" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdeefbfd3, "ufshcd_pltfrm_init" },
	{ 0x3102f525, "ufshcd_remove" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tc-dwc-g210,ufshcd-dwc,ufshcd-pltfrm,ufshcd-core");

MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-20bit");
MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-20bitC*");
MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-40bit");
MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-40bitC*");

MODULE_INFO(srcversion, "2CC933F23929C7B9B79B712");
