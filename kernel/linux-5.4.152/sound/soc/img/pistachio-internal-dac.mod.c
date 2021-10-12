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
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x2eed4747, "syscon_regmap_lookup_by_phandle" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x5378729e, "snd_soc_component_init_regmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cimg,pistachio-internal-dac");
MODULE_ALIAS("of:N*T*Cimg,pistachio-internal-dacC*");

MODULE_INFO(srcversion, "2DD70D6A2842CE4FCDAA734");
