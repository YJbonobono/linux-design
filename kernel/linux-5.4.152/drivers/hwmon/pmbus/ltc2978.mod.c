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
	{ 0x52db2e23, "pmbus_regulator_ops" },
	{ 0x95178ca5, "pmbus_do_remove" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xf1b1555c, "pmbus_read_word_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x36024a74, "pmbus_do_probe" },
	{ 0x702c769b, "i2c_smbus_read_block_data" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8447d88a, "pmbus_write_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd0d6b5aa, "pmbus_read_byte_data" },
	{ 0x376a831a, "pmbus_get_driver_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:ltc2974");
MODULE_ALIAS("i2c:ltc2975");
MODULE_ALIAS("i2c:ltc2977");
MODULE_ALIAS("i2c:ltc2978");
MODULE_ALIAS("i2c:ltc2980");
MODULE_ALIAS("i2c:ltc3880");
MODULE_ALIAS("i2c:ltc3882");
MODULE_ALIAS("i2c:ltc3883");
MODULE_ALIAS("i2c:ltc3886");
MODULE_ALIAS("i2c:ltc3887");
MODULE_ALIAS("i2c:ltm2987");
MODULE_ALIAS("i2c:ltm4675");
MODULE_ALIAS("i2c:ltm4676");
MODULE_ALIAS("i2c:ltm4686");

MODULE_INFO(srcversion, "DBC9B85C03E6E41E9310A63");
