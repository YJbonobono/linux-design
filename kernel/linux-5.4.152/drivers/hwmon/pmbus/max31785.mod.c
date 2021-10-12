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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x46de5c70, "pmbus_get_fan_rate_device" },
	{ 0xf1b1555c, "pmbus_read_word_data" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x458d4be7, "pmbus_set_page" },
	{ 0xd0d6b5aa, "pmbus_read_byte_data" },
	{ 0x56e6fb17, "pmbus_update_fan" },
	{ 0x173f93c6, "pmbus_get_fan_rate_cached" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x36024a74, "pmbus_do_probe" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cmaxim,max31785");
MODULE_ALIAS("of:N*T*Cmaxim,max31785C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31785a");
MODULE_ALIAS("of:N*T*Cmaxim,max31785aC*");
MODULE_ALIAS("i2c:max31785");
MODULE_ALIAS("i2c:max31785a");

MODULE_INFO(srcversion, "8FBA639A66EABB1E33FD3CE");
