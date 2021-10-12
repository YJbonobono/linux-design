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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0x7efc7807, "devm_i2c_new_dummy_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cs35390a");
MODULE_ALIAS("of:N*T*Cs35390aC*");
MODULE_ALIAS("of:N*T*Csii,s35390a");
MODULE_ALIAS("of:N*T*Csii,s35390aC*");
MODULE_ALIAS("i2c:s35390a");

MODULE_INFO(srcversion, "42E3D4D88AAAF5B1AAA96C5");
