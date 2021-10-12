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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x272c5d5a, "i2c_mux_add_adapter" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0x2068ecdc, "i2c_root_adapter" },
	{ 0x9e6b178e, "i2c_mux_alloc" },
	{ 0x2b907b1a, "i2c_get_adapter" },
	{ 0xfe4cc80a, "gpiod_count" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf3cb019e, "gpiod_set_array_value_cansleep" },
	{ 0x35263d7d, "i2c_put_adapter" },
	{ 0x5e108ee9, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-gpio");
MODULE_ALIAS("of:N*T*Ci2c-mux-gpioC*");

MODULE_INFO(srcversion, "72A79AD9F8E864DE24B7BAC");
