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
	{ 0xcbb3ceaf, "regulator_get_current_limit_regmap" },
	{ 0xbb77c6ef, "regulator_set_current_limit_regmap" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x7a73e605, "wm831x_isinkv_values" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3acfceab, "wm831x_set_bits" },
	{ 0x3cb699f2, "wm831x_reg_read" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0x6cb185f1, "regulator_unlock" },
	{ 0xf19b7ba9, "regulator_notifier_call_chain" },
	{ 0x11fac205, "regulator_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D6F51FC446CA9B7CFB2FB3C");
