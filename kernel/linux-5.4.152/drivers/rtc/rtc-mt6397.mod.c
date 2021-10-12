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
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6397-rtc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397-rtcC*");

MODULE_INFO(srcversion, "657D3C805A667892FB44F5C");
