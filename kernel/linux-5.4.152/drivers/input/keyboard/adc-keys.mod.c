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
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0x599e4c86, "devm_input_allocate_polled_device" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x4a94858a, "iio_get_channel_type" },
	{ 0xe9385068, "devm_iio_channel_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8c679e2, "input_event" },
	{ 0xa5056eb6, "iio_read_channel_processed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,industrialio");


MODULE_INFO(srcversion, "C4B8EBAC856BA933DFDE3EA");
