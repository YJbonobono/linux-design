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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x70a2e2f5, "regmap_register_patch" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xea8e2574, "input_ff_create_memless" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("of:N*T*Cti,drv2604");
MODULE_ALIAS("of:N*T*Cti,drv2604C*");
MODULE_ALIAS("of:N*T*Cti,drv2604l");
MODULE_ALIAS("of:N*T*Cti,drv2604lC*");
MODULE_ALIAS("of:N*T*Cti,drv2605");
MODULE_ALIAS("of:N*T*Cti,drv2605C*");
MODULE_ALIAS("of:N*T*Cti,drv2605l");
MODULE_ALIAS("of:N*T*Cti,drv2605lC*");
MODULE_ALIAS("i2c:drv2605l");

MODULE_INFO(srcversion, "FB5DCA964A230DEAD9B6731");
