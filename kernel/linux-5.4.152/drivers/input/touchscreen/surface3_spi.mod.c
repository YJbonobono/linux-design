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
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xd4ffb6b5, "input_mt_get_slot_by_key" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf8c679e2, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2292b333, "spi_setup" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0037:*");

MODULE_INFO(srcversion, "C757A726CE279D1A15A9663");
