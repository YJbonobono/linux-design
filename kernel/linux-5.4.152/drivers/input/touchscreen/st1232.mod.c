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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa2782c25, "dev_pm_qos_remove_request" },
	{ 0x69f89ede, "dev_pm_qos_add_ancestor_request" },
	{ 0xf8c679e2, "input_event" },
	{ 0x94fb90fa, "touchscreen_report_pos" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csitronix,st1232");
MODULE_ALIAS("of:N*T*Csitronix,st1232C*");
MODULE_ALIAS("of:N*T*Csitronix,st1633");
MODULE_ALIAS("of:N*T*Csitronix,st1633C*");
MODULE_ALIAS("i2c:st1232-ts");
MODULE_ALIAS("i2c:st1633-ts");

MODULE_INFO(srcversion, "AE986437452ED39F3C529B6");
