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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xb9faeede, "w1_unregister_family" },
	{ 0xff6c327d, "w1_register_family" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8ce1e810, "power_supply_am_i_supplied" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xc00077b8, "w1_write_block" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40fa9a7c, "w1_read_block" },
	{ 0x182e4b51, "w1_write_8" },
	{ 0x267fe8fc, "w1_reset_select_slave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "CEBED0968B0BEB73D67F4D8");
