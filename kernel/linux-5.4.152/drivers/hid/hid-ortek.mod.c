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
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000005A4p00001700");
MODULE_ALIAS("hid:b0003g*v000005A4p00002000");
MODULE_ALIAS("hid:b0003g*v000005A4p00008003");
MODULE_ALIAS("hid:b0003g*v00001223p00003F07");

MODULE_INFO(srcversion, "B59F813E2AA203092DE4E2A");
