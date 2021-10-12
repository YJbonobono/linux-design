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
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xddff5a51, "devm_backlight_device_register" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x61651be, "strcat" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4572BF3F32DFC523F551999");
