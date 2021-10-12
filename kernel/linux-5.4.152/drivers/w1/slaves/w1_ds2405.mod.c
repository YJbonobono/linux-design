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
	{ 0xb9faeede, "w1_unregister_family" },
	{ 0xff6c327d, "w1_register_family" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc00077b8, "w1_write_block" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1e233ce, "w1_read_8" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xce260bc8, "w1_triplet" },
	{ 0x182e4b51, "w1_write_8" },
	{ 0x23bed32e, "w1_reset_bus" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "817EE9100E3D984B7D7F93D");
