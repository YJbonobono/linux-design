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
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x7f50ba50, "devm_snd_dmaengine_pcm_register" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x2eed4747, "syscon_regmap_lookup_by_phandle" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Chisilicon,hi6210-i2s");
MODULE_ALIAS("of:N*T*Chisilicon,hi6210-i2sC*");

MODULE_INFO(srcversion, "114D13A8E1A05A1A04E49DB");
