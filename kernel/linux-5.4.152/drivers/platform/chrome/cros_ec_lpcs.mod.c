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
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xe78fd329, "cros_ec_check_result" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x2c23ec3, "cros_ec_resume" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb8ea7809, "cros_ec_prepare_tx" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd0a73b3c, "cros_ec_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9570732b, "platform_device_register" },
	{ 0x5af205c4, "cros_ec_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x76ccb75e, "cros_ec_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x993ecff8, "cros_ec_get_next_event" },
};

MODULE_INFO(depends, "cros_ec");

MODULE_ALIAS("acpi*:GOOG0004:*");
MODULE_ALIAS("dmi*:bvn*coreboot*:bvr*Google_*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:svn*GOOGLE*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Link*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Samus*:");
MODULE_ALIAS("dmi*:svn*Acer*:pn*Peppy*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Glimmer*:");

MODULE_INFO(srcversion, "1E58F3DB05E043AF5BD65F4");
