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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x1ee2b308, "isa_unregister_driver" },
	{ 0x4736d750, "isa_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B5F551F18DD2E7B0EA3E538");
