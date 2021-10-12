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
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max6621");
MODULE_ALIAS("of:N*T*Cmaxim,max6621C*");
MODULE_ALIAS("i2c:max6621");

MODULE_INFO(srcversion, "F7CBBA1C47AB9366E618C47");
