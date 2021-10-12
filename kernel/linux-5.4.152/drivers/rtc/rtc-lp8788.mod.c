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
	{ 0x66d2aa82, "lp8788_read_multi_bytes" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c6ffabc, "lp8788_write_byte" },
	{ 0xf607927f, "lp8788_update_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2D65E5D7D0E65B99DD8AD0C");
