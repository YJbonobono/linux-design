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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0xb9faeede, "w1_unregister_family" },
	{ 0xff6c327d, "w1_register_family" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x41a8b36d, "w1_reset_resume_command" },
	{ 0x40fa9a7c, "w1_read_block" },
	{ 0xbd6841d4, "crc16" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd0cc0d81, "w1_touch_bit" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xe1e233ce, "w1_read_8" },
	{ 0x182e4b51, "w1_write_8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc00077b8, "w1_write_block" },
	{ 0x267fe8fc, "w1_reset_select_slave" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "15E89FF0209D7B4579CC792");
