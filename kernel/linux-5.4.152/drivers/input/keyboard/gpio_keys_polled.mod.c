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
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0x658e8c93, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x599e4c86, "devm_input_allocate_polled_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xf8c679e2, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Cgpio-keys-polled");
MODULE_ALIAS("of:N*T*Cgpio-keys-polledC*");

MODULE_INFO(srcversion, "ADCCFC7978BDDC83FFA2B4C");
