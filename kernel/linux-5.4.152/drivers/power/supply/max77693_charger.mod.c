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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max77693-charger");

MODULE_INFO(srcversion, "B96C6595140F51C92B7299C");
