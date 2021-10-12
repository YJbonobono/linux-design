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
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xfe990052, "gpio_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "713332D2968BED6D9B3F736");
