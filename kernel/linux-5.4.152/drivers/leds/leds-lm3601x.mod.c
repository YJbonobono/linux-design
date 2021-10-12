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
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x62eeffa7, "led_classdev_flash_unregister" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe13b7148, "led_classdev_flash_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "led-class-flash");

MODULE_ALIAS("of:N*T*Cti,lm36010");
MODULE_ALIAS("of:N*T*Cti,lm36010C*");
MODULE_ALIAS("of:N*T*Cti,lm36011");
MODULE_ALIAS("of:N*T*Cti,lm36011C*");
MODULE_ALIAS("i2c:LM36010");
MODULE_ALIAS("i2c:LM36011");

MODULE_INFO(srcversion, "C11319AAC6B4BC14358DC24");
