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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36024a74, "pmbus_do_probe" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x702c769b, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf1b1555c, "pmbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:ir35221");

MODULE_INFO(srcversion, "8D33E3097756222AB841E47");
