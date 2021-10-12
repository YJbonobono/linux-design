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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x7f50ba50, "devm_snd_dmaengine_pcm_register" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xaae6f75a, "__devm_reset_control_get" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cimg,parallel-out");
MODULE_ALIAS("of:N*T*Cimg,parallel-outC*");

MODULE_INFO(srcversion, "1ADDF495F8FEF687A9904F8");
