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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl-usb2-mph");
MODULE_ALIAS("of:N*T*Cfsl-usb2-mphC*");
MODULE_ALIAS("of:N*T*Cfsl-usb2-dr");
MODULE_ALIAS("of:N*T*Cfsl-usb2-drC*");

MODULE_INFO(srcversion, "379BAE9C0F18C220372B8EB");
