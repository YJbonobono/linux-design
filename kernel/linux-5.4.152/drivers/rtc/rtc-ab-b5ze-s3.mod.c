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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:abb5zes3");

MODULE_INFO(srcversion, "05E0A8545E57A0B9B4D946D");
