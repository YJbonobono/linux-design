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
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x6e89a560, "regmap_irq_chip_get_base" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x9ee3af0f, "regmap_add_irq_chip" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:retu");
MODULE_ALIAS("i2c:tahvo");
MODULE_ALIAS("of:N*T*Cnokia,retu");
MODULE_ALIAS("of:N*T*Cnokia,retuC*");
MODULE_ALIAS("of:N*T*Cnokia,tahvo");
MODULE_ALIAS("of:N*T*Cnokia,tahvoC*");

MODULE_INFO(srcversion, "26974667B784BD1A235BD1D");
