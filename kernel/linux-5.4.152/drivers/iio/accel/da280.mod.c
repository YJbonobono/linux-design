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
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:da226");
MODULE_ALIAS("i2c:da280");
MODULE_ALIAS("acpi*:MIRAACC:*");

MODULE_INFO(srcversion, "E9B7EE8E2993D967FC14793");
