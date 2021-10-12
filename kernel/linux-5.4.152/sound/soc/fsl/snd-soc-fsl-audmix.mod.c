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
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx8qm-audmix");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-audmixC*");

MODULE_INFO(srcversion, "160AE6DDA92CD4FA8AF948A");
