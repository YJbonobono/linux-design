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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe6dfb004, "usb_remove_phy" },
	{ 0x9492220, "musb_mailbox" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xd78696a, "pinctrl_select_state" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "musb_hdrc");


MODULE_INFO(srcversion, "CBD3A171136019932929E50");
