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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cadi,ad7745");
MODULE_ALIAS("of:N*T*Cadi,ad7745C*");
MODULE_ALIAS("of:N*T*Cadi,ad7746");
MODULE_ALIAS("of:N*T*Cadi,ad7746C*");
MODULE_ALIAS("of:N*T*Cadi,ad7747");
MODULE_ALIAS("of:N*T*Cadi,ad7747C*");
MODULE_ALIAS("i2c:ad7745");
MODULE_ALIAS("i2c:ad7746");
MODULE_ALIAS("i2c:ad7747");

MODULE_INFO(srcversion, "F210ACFD05C877A85F8354F");
