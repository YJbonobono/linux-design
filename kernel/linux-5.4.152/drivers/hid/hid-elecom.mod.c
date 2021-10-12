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

MODULE_ALIAS("hid:b0005g*v0000056Ep00000061");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FB");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FC");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FD");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FE");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FF");
MODULE_ALIAS("hid:b0003g*v0000056Ep0000010C");
MODULE_ALIAS("hid:b0003g*v0000056Ep0000010D");

MODULE_INFO(srcversion, "FD894B079228895F551BDD6");
