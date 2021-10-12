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
	{ 0x2f2ddfe9, "pcf50633_register_irq" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x2f5e5108, "pcf50633_read_block" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f0ec27a, "pcf50633_write_block" },
	{ 0x435460bf, "pcf50633_irq_mask_get" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xfc7732d8, "pcf50633_irq_mask" },
	{ 0xf02d4cda, "pcf50633_irq_unmask" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xdb77aea7, "pcf50633_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcf50633");


MODULE_INFO(srcversion, "029CD9F0F223E493087E00B");
