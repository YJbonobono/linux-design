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
	{ 0xd6b0a642, "st_lsm6dsx_pm_ops" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4bc482b4, "st_lsm6dsx_probe" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_lsm6dsx");

MODULE_ALIAS("i2c:lsm6ds3");
MODULE_ALIAS("i2c:lsm6ds3h");
MODULE_ALIAS("i2c:lsm6dsl");
MODULE_ALIAS("i2c:lsm6dsm");
MODULE_ALIAS("i2c:ism330dlc");
MODULE_ALIAS("i2c:lsm6dso");
MODULE_ALIAS("i2c:asm330lhh");
MODULE_ALIAS("i2c:lsm6dsox");
MODULE_ALIAS("i2c:lsm6dsr");
MODULE_ALIAS("i2c:lsm6ds3tr-c");
MODULE_ALIAS("i2c:ism330dhcx");
MODULE_ALIAS("i2c:lsm9ds1-imu");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3C*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3h");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3hC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsl");
MODULE_ALIAS("of:N*T*Cst,lsm6dslC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsm");
MODULE_ALIAS("of:N*T*Cst,lsm6dsmC*");
MODULE_ALIAS("of:N*T*Cst,ism330dlc");
MODULE_ALIAS("of:N*T*Cst,ism330dlcC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dso");
MODULE_ALIAS("of:N*T*Cst,lsm6dsoC*");
MODULE_ALIAS("of:N*T*Cst,asm330lhh");
MODULE_ALIAS("of:N*T*Cst,asm330lhhC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsox");
MODULE_ALIAS("of:N*T*Cst,lsm6dsoxC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsr");
MODULE_ALIAS("of:N*T*Cst,lsm6dsrC*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3tr-c");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3tr-cC*");
MODULE_ALIAS("of:N*T*Cst,ism330dhcx");
MODULE_ALIAS("of:N*T*Cst,ism330dhcxC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-imu");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-imuC*");

MODULE_INFO(srcversion, "960A223A821C69186403F77");
