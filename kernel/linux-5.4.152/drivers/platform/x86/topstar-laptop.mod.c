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
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x53ca4226, "input_free_device" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:TPS0001:*");
MODULE_ALIAS("acpi*:TPSACPI01:*");

MODULE_INFO(srcversion, "16A5C2775E9AC0963E1D355");
