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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xced72aae, "ti_lmu_common_set_brightness" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "leds-ti-lmu-common");

MODULE_ALIAS("of:N*T*Cti,lm36274-backlight");
MODULE_ALIAS("of:N*T*Cti,lm36274-backlightC*");

MODULE_INFO(srcversion, "A6788D4C1B5CFDE329E4A4D");
