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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xdb3bb5e8, "snd_jack_set_key" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x43a6f1ca, "snd_soc_jack_report" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd,snd-soc-core");

MODULE_ALIAS("of:N*T*Cti,ts3a227e");
MODULE_ALIAS("of:N*T*Cti,ts3a227eC*");
MODULE_ALIAS("i2c:ts3a227e");
MODULE_ALIAS("acpi*:104C227E:*");

MODULE_INFO(srcversion, "691DDB98EB8C7A72BC32454");
