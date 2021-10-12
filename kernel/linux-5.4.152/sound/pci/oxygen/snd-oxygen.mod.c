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
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xb177d101, "seq_printf" },
	{ 0xa59a9d91, "oxygen_read16" },
	{ 0xf67bce8, "oxygen_pci_remove" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf531dc0e, "oxygen_write8_masked" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x9e709eae, "oxygen_write16_masked" },
	{ 0xd2e6902c, "oxygen_write_spi" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf332796, "oxygen_pci_probe" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0xc540c44a, "oxygen_write16" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xbe9e09c3, "snd_component_add" },
	{ 0x144fc26d, "oxygen_read8" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x7cc96657, "oxygen_update_dac_routing" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x20cda06d, "oxygen_pci_pm" },
	{ 0xa6de447a, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-oxygen-lib,snd");

MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000216bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000217bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000218bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000219bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv0000147Asd0000A017bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001A58sd00000910bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008467bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008521bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008782bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd0000FFFFbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000014C3sd00001710bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000014C3sd00001711bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv0000415Asd00005431bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00005431sd0000017Abc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00007284sd00009761bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00007284sd00009781bc*sc*i*");

MODULE_INFO(srcversion, "C424DF432A3704E2DE8F646");
