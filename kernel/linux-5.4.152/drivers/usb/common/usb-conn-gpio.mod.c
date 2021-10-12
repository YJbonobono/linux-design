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
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xf38d108b, "usb_role_switch_get" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x87e5e4e2, "gpiod_set_debounce" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfc2497e3, "regulator_is_enabled" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6e4e3fc0, "pinctrl_pm_select_sleep_state" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x97476dc9, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-usb-b-connector");
MODULE_ALIAS("of:N*T*Cgpio-usb-b-connectorC*");

MODULE_INFO(srcversion, "8BFA63386102661E4527F7C");
