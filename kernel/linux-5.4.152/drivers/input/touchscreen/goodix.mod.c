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
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x94fb90fa, "touchscreen_report_pos" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfd94814e, "complete_all" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GDIX1001:*");
MODULE_ALIAS("acpi*:GDIX1002:*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "574516BB99098558249F0CD");
