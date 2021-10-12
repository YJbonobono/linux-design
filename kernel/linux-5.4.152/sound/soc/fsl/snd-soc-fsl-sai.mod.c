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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xb3c189c2, "snd_pcm_hw_constraint_step" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x7f50ba50, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xeb746335, "__devm_regmap_init_mmio_clk" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cfsl,vf610-sai");
MODULE_ALIAS("of:N*T*Cfsl,vf610-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-saiC*");

MODULE_INFO(srcversion, "5175337B969C98DF858D22B");
