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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9632");
MODULE_ALIAS("of:N*T*Cnxp,pca9632C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9633");
MODULE_ALIAS("of:N*T*Cnxp,pca9633C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9634");
MODULE_ALIAS("of:N*T*Cnxp,pca9634C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9635");
MODULE_ALIAS("of:N*T*Cnxp,pca9635C*");
MODULE_ALIAS("i2c:pca9632");
MODULE_ALIAS("i2c:pca9633");
MODULE_ALIAS("i2c:pca9634");
MODULE_ALIAS("i2c:pca9635");

MODULE_INFO(srcversion, "122182FB4EEF190658090F9");
