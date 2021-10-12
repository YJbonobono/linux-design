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
	{ 0xb0cd90f3, "dp_altmode_probe" },
	{ 0xe10b1ac, "typec_altmode_unregister_driver" },
	{ 0x62a8c9b9, "dp_altmode_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc039876d, "__typec_altmode_register_driver" },
};

MODULE_INFO(depends, "typec_displayport,typec");

MODULE_ALIAS("typec:id0955m*");

MODULE_INFO(srcversion, "D220EB7B35E281872FDF894");
