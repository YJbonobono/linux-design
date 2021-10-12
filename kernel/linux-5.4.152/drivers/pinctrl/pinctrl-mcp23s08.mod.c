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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x43d64963, "gpiochip_set_nested_irqchip" },
	{ 0x69ba222, "gpiochip_irqchip_add_key" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xf015a0e2, "devm_pinctrl_register" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x21cf72e0, "pinctrl_dev_get_drvdata" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");

MODULE_INFO(srcversion, "632761FBD31D918C1026EF1");
