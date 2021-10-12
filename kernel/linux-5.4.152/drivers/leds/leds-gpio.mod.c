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
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0x658e8c93, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0xc81c5573, "gpiod_set_consumer_name" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x8df9e738, "gpiod_cansleep" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-leds");
MODULE_ALIAS("of:N*T*Cgpio-ledsC*");

MODULE_INFO(srcversion, "0B46879BE05BCD6BAC86B7E");
