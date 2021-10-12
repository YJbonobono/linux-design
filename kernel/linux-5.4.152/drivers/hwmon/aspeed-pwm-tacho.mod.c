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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xaae6f75a, "__devm_reset_control_get" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tachoC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tachoC*");

MODULE_INFO(srcversion, "C6C9D58332FC25831FFC18F");
