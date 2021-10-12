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
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x1a30f5d9, "i8042_install_filter" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xebbb0817, "lis3lv02d_init_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x49c89b60, "serio_interrupt" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x87f94989, "lis3lv02d_remove_fs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xbe30997b, "lis3lv02d_joystick_disable" },
	{ 0x4791395b, "i8042_remove_filter" },
	{ 0xf5b17bd3, "lis3lv02d_poweroff" },
	{ 0xdca2bca7, "lis3lv02d_poweron" },
	{ 0xa40b012a, "lis3_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("acpi*:HPQ0004:*");
MODULE_ALIAS("acpi*:HPQ6000:*");
MODULE_ALIAS("acpi*:HPQ6007:*");

MODULE_INFO(srcversion, "2D97305791D2F0BE754C9F4");
