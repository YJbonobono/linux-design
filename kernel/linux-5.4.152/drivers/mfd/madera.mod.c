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
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x70a2e2f5, "regmap_register_patch" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x963d3287, "regulator_put" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9e6c47a8, "regulator_get" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccirrus,cs47l15");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l15C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l35");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l35C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l85");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l85C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l90");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l90C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l91");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l91C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l92");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l92C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l92");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l92C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l93");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l93C*");
MODULE_ALIAS("of:N*T*Ccirrus,wm1840");
MODULE_ALIAS("of:N*T*Ccirrus,wm1840C*");

MODULE_INFO(srcversion, "9894080EA7FC87020D529F2");
