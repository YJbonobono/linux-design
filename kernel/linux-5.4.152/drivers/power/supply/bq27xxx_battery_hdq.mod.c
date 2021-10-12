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
	{ 0xb9faeede, "w1_unregister_family" },
	{ 0xff6c327d, "w1_register_family" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1e233ce, "w1_read_8" },
	{ 0x182e4b51, "w1_write_8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x81a64197, "bq27xxx_battery_setup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x179290a2, "bq27xxx_battery_teardown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire,bq27xxx_battery");


MODULE_INFO(srcversion, "F9854CDD7FEFE23D0610B20");
