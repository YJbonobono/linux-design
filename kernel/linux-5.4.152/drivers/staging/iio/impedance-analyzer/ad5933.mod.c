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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x6009b351, "iio_device_attach_buffer" },
	{ 0x4bb1240c, "iio_kfifo_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x5a4a7fe5, "iio_kfifo_free" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("of:N*T*Cadi,ad5933");
MODULE_ALIAS("of:N*T*Cadi,ad5933C*");
MODULE_ALIAS("of:N*T*Cadi,ad5934");
MODULE_ALIAS("of:N*T*Cadi,ad5934C*");
MODULE_ALIAS("i2c:ad5933");
MODULE_ALIAS("i2c:ad5934");

MODULE_INFO(srcversion, "7C528DDF65B0DE8504E226F");
