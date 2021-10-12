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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xf8c679e2, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcbd4e7f, "device_property_read_u8_array" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xebe17cb6, "devm_device_add_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xf36d80ec, "device_property_present" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B8612A16CC09E7F1DD6087");
