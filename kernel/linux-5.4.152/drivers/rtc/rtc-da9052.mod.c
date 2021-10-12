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
	{ 0x114ea56b, "da9052_request_irq" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1DADE6889DA551C80A966D4");
