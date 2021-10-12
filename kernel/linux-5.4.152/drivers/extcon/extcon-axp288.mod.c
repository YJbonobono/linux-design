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
	{ 0xbe655bdf, "device_connection_remove" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8f0c92d1, "device_connection_add" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x19c278b5, "devm_extcon_register_notifier_all" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xefb11847, "extcon_get_extcon_dev" },
	{ 0x4de1a90, "acpi_dev_get_first_match_dev" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xf38d108b, "usb_role_switch_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0xff42c374, "usb_role_switch_get_role" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0xb1ff0942, "extcon_get_state" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_extcon");

MODULE_INFO(srcversion, "07B1C2D26E7F92D458E2C65");
