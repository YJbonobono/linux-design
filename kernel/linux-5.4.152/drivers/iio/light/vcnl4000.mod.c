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
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cvishay,vcnl4000");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4000C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200C*");
MODULE_ALIAS("i2c:vcnl4000");
MODULE_ALIAS("i2c:vcnl4010");
MODULE_ALIAS("i2c:vcnl4020");
MODULE_ALIAS("i2c:vcnl4040");
MODULE_ALIAS("i2c:vcnl4200");

MODULE_INFO(srcversion, "F5AEC4891918D2F69132C41");
