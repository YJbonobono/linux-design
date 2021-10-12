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
	{ 0x96848186, "scnprintf" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x15575520, "power_supply_get_battery_info" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d3701e7, "power_supply_set_input_current_limit_from_supplier" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bq24190");
MODULE_ALIAS("i2c:bq24192");
MODULE_ALIAS("i2c:bq24192i");
MODULE_ALIAS("i2c:bq24196");

MODULE_INFO(srcversion, "580F0074470A55A6D29CDFA");
