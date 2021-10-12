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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf6f1080a, "thermal_zone_device_register" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0x9d482986, "thermal_cooling_device_register" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x667f43dc, "thermal_zone_device_update" },
	{ 0xb8107662, "thermal_zone_bind_cooling_device" },
	{ 0xb004f0e1, "thermal_zone_unbind_cooling_device" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xdafd70ab, "thermal_zone_device_unregister" },
	{ 0x48241b4e, "thermal_cooling_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x5a921311, "strncmp" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE0D9838712E19A0980A2AD");
