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
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x29ce339a, "usb_role_switch_register" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xf29cdf27, "software_node_register" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0xe5ede6d, "software_node_fwnode" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:intel_xhci_usb_sw");

MODULE_INFO(srcversion, "366FCEEC632F329C43F8214");
