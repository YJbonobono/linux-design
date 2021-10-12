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
	{ 0x2d545f8c, "bus_for_each_drv" },
	{ 0x99e22ac7, "hid_bus_type" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0x50846e4b, "hid_match_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b*g*v*p*");

MODULE_INFO(srcversion, "AA4DBCEB2C92FCF8B805A86");
