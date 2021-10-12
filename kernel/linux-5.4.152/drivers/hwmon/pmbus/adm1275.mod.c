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
	{ 0x95178ca5, "pmbus_do_remove" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xf1b1555c, "pmbus_read_word_data" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36024a74, "pmbus_do_probe" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x702c769b, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0d6b5aa, "pmbus_read_byte_data" },
	{ 0x9d74f681, "pmbus_write_word_data" },
	{ 0x376a831a, "pmbus_get_driver_info" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:adm1075");
MODULE_ALIAS("i2c:adm1272");
MODULE_ALIAS("i2c:adm1275");
MODULE_ALIAS("i2c:adm1276");
MODULE_ALIAS("i2c:adm1278");
MODULE_ALIAS("i2c:adm1293");
MODULE_ALIAS("i2c:adm1294");

MODULE_INFO(srcversion, "88CD351557D76A3C2CFCBC6");
