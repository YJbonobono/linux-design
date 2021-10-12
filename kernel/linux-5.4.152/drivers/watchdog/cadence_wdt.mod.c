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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x54750daf, "devm_watchdog_register_device" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xbef44855, "watchdog_init_timeout" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccdns,wdt-r1p2");
MODULE_ALIAS("of:N*T*Ccdns,wdt-r1p2C*");

MODULE_INFO(srcversion, "13C2DDD2C01A74AEBDF987D");
