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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcdb79850, "power_supply_register_no_ws" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x15575520, "power_supply_get_battery_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad755fc2, "param_get_uint" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9a45f14d, "param_set_uint" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8ce1e810, "power_supply_am_i_supplied" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "976F67E24E6C1F842E41CE5");
