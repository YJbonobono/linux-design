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
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7ac2fe61, "mcb_bus_add_devices" },
	{ 0x4f41eca0, "chameleon_parse_cells" },
	{ 0xdd6b3f75, "mcb_alloc_bus" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3430c2b6, "mcb_release_bus" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0xe6852960, "platform_device_put" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");

MODULE_ALIAS("dmi*:svn*MEN*:pvr*14SC24*:");
MODULE_ALIAS("dmi*:svn*MEN*:pvr*14SC31*:");

MODULE_INFO(srcversion, "CF13D539220F3BF5B0E91FB");
