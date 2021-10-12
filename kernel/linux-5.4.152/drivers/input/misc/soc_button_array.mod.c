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
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0x4debdc27, "gpiod_get_index" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfe4cc80a, "gpiod_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4afb405, "acpi_device_get_match_data" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C40:*");
MODULE_ALIAS("acpi*:ACPI0011:*");
MODULE_ALIAS("acpi*:MSHW0040:*");

MODULE_INFO(srcversion, "CF130AD740F60C660E67E33");
