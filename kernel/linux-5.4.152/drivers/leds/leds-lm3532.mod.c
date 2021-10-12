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
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbd4e7f, "device_property_read_u8_array" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3532-led");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");

MODULE_INFO(srcversion, "C36D594631B2C9E5BE2B2F8");
