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
	{ 0x1d96758f, "stmmac_pltfr_pm_ops" },
	{ 0x4edef12d, "stmmac_pltfr_remove" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b411399, "stmmac_remove_config_dt" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcff72bbd, "stmmac_dvr_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb3deb632, "stmmac_probe_config_dt" },
	{ 0x5a777159, "stmmac_get_platform_resources" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "stmmac-platform,stmmac");

MODULE_ALIAS("of:N*T*Cst,spear600-gmac");
MODULE_ALIAS("of:N*T*Cst,spear600-gmacC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.50a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.50aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.00");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.00C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.10a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.10aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac");
MODULE_ALIAS("of:N*T*Csnps,dwmacC*");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac-2.10");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac-2.10C*");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac");
MODULE_ALIAS("of:N*T*Csnps,dwxgmacC*");

MODULE_INFO(srcversion, "6D2892961339EC83CE1D42A");
