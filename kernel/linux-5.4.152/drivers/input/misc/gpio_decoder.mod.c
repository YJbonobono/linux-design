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
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0xf8c679e2, "input_event" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x599e4c86, "devm_input_allocate_polled_device" },
	{ 0xd4e2b35, "devm_gpiod_get_array" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");


MODULE_INFO(srcversion, "B60909B06320D6C6A22BB18");
