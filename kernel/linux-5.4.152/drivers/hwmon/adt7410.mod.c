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
	{ 0x5cea4a9d, "adt7x10_dev_pm_ops" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0xe394d6af, "adt7x10_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9666d4a9, "adt7x10_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adt7x10");

MODULE_ALIAS("i2c:adt7410");
MODULE_ALIAS("i2c:adt7420");

MODULE_INFO(srcversion, "073B83A58DF6DBD802AEECE");
