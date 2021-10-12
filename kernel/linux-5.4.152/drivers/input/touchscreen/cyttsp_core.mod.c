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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0xcbd4e7f, "device_property_read_u8_array" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xf36d80ec, "device_property_present" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F551C39C618D6BC80826993");
