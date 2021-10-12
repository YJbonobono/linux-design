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
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x96848186, "scnprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3533");

MODULE_INFO(srcversion, "07D71F7C10D2B1F8B6A9D16");
