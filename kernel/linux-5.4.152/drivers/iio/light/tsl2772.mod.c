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
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x868acba5, "get_options" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl2571");
MODULE_ALIAS("of:N*T*Camstaos,tsl2571C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772C*");
MODULE_ALIAS("of:N*T*Cavago,apds9930");
MODULE_ALIAS("of:N*T*Cavago,apds9930C*");
MODULE_ALIAS("i2c:tsl2571");
MODULE_ALIAS("i2c:tsl2671");
MODULE_ALIAS("i2c:tmd2671");
MODULE_ALIAS("i2c:tsl2771");
MODULE_ALIAS("i2c:tmd2771");
MODULE_ALIAS("i2c:tsl2572");
MODULE_ALIAS("i2c:tsl2672");
MODULE_ALIAS("i2c:tmd2672");
MODULE_ALIAS("i2c:tsl2772");
MODULE_ALIAS("i2c:tmd2772");
MODULE_ALIAS("i2c:apds9930");

MODULE_INFO(srcversion, "F0908C717EC2BD297A5F2A0");
