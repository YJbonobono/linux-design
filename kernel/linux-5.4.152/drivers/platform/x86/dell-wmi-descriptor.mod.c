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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe4478115, "__wmi_driver_register" },
	{ 0xa8a942cf, "wmi_driver_unregister" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9ce7543d, "wmidev_block_query" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("wmi:8D9DDCBC-A997-11DA-B012-B622A1EF5492");

MODULE_INFO(srcversion, "F5C05FF8DB241FE6C22C20B");
