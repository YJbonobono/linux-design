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
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:mma8451");
MODULE_ALIAS("i2c:mma8452");
MODULE_ALIAS("i2c:mma8453");
MODULE_ALIAS("i2c:mma8652");
MODULE_ALIAS("i2c:mma8653");
MODULE_ALIAS("i2c:fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,mma8451");
MODULE_ALIAS("of:N*T*Cfsl,mma8451C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8452");
MODULE_ALIAS("of:N*T*Cfsl,mma8452C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8453");
MODULE_ALIAS("of:N*T*Cfsl,mma8453C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8652");
MODULE_ALIAS("of:N*T*Cfsl,mma8652C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8653");
MODULE_ALIAS("of:N*T*Cfsl,mma8653C*");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471C*");

MODULE_INFO(srcversion, "4B067F25583E0EA6C51B752");
