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
	{ 0x267fe8fc, "w1_reset_select_slave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xc00077b8, "w1_write_block" },
	{ 0x182e4b51, "w1_write_8" },
	{ 0x40fa9a7c, "w1_read_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xff6c327d, "w1_register_family" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xb9faeede, "w1_unregister_family" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "B8D797D07D4ABF693E10E12");
