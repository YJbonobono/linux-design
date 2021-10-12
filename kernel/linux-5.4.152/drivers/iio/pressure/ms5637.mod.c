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
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x668c4238, "ms_sensors_read_temp_and_pressure" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x6acc048d, "ms_sensors_tp_read_prom" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,ms5637");
MODULE_ALIAS("of:N*T*Cmeas,ms5637C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5805");
MODULE_ALIAS("of:N*T*Cmeas,ms5805C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5837");
MODULE_ALIAS("of:N*T*Cmeas,ms5837C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-temppressure");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-temppressureC*");
MODULE_ALIAS("i2c:ms5637");
MODULE_ALIAS("i2c:ms5805");
MODULE_ALIAS("i2c:ms5837");
MODULE_ALIAS("i2c:ms8607-temppressure");

MODULE_INFO(srcversion, "A0ED3D9D3501417E3BAB7FD");
