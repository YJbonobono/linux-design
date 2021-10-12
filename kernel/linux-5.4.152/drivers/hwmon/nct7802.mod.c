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
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:nct7802");

MODULE_INFO(srcversion, "F25811F498C3597E96047B3");
