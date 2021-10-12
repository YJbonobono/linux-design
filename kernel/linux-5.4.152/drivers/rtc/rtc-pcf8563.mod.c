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
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xf4bf417, "devm_clk_register" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");

MODULE_INFO(srcversion, "3348EF6C576B13BB999A646");
