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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x54750daf, "devm_watchdog_register_device" },
	{ 0xbef44855, "watchdog_init_timeout" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0xc81c5573, "gpiod_set_consumer_name" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0xfe4cc80a, "gpiod_count" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmen,a021-wdt");
MODULE_ALIAS("of:N*T*Cmen,a021-wdtC*");

MODULE_INFO(srcversion, "DB60F8A578926F50185DE23");
