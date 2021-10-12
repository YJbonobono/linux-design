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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xebc4dc41, "sysfs_create_file_ns" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x83b05a16, "param_ops_uint" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,hidma-mgmt-1.0");
MODULE_ALIAS("of:N*T*Cqcom,hidma-mgmt-1.0C*");
MODULE_ALIAS("acpi*:QCOM8060:*");

MODULE_INFO(srcversion, "5758466E445B447DDAD365A");
