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
	{ 0x1180edeb, "ufshcd_pltfrm_runtime_idle" },
	{ 0xcdd0d7b8, "ufshcd_pltfrm_runtime_resume" },
	{ 0xa5f48381, "ufshcd_pltfrm_runtime_suspend" },
	{ 0x2f1b4358, "ufshcd_pltfrm_resume" },
	{ 0x51caa6d, "ufshcd_pltfrm_suspend" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x743c7874, "ufshcd_dme_set_attr" },
	{ 0xdeefbfd3, "ufshcd_pltfrm_init" },
	{ 0x3102f525, "ufshcd_remove" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-pltfrm,ufshcd-core");

MODULE_ALIAS("of:N*T*Ccdns,ufshc");
MODULE_ALIAS("of:N*T*Ccdns,ufshcC*");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nm");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nmC*");

MODULE_INFO(srcversion, "6A244C5303A7C8E431EDE9D");
