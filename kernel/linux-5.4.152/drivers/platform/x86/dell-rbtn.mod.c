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
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xff282521, "rfkill_register" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xd70f62b6, "acpi_os_execute" },
	{ 0x5220ece5, "rfkill_alloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd05ef65f, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:DELRBTN:*");
MODULE_ALIAS("acpi*:DELLABCE:*");

MODULE_INFO(srcversion, "DCFBC8539677AB48B44248A");
