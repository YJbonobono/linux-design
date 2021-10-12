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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x4df02057, "crc32_be" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9601035f, "request_firmware" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x94fb90fa, "touchscreen_report_pos" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:CHPN0001:*");

MODULE_INFO(srcversion, "8E8529B6666F735EA8D2897");
