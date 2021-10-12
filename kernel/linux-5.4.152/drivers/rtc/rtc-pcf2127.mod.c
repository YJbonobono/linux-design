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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x1bee3826, "rtc_nvmem_register" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0x98438999, "rtc_add_group" },
	{ 0x54750daf, "devm_watchdog_register_device" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");

MODULE_INFO(srcversion, "BE60B1D00E6D77AEC0E78E1");
