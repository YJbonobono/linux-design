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
	{ 0x9f72238f, "intel_pinctrl_resume_noirq" },
	{ 0xc6d53c81, "intel_pinctrl_suspend_noirq" },
	{ 0xe308231d, "intel_pinctrl_probe_by_uid" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pinctrl-intel");

MODULE_ALIAS("acpi*:INT3453:*");

MODULE_INFO(srcversion, "BC4F936399C673C987E2307");
