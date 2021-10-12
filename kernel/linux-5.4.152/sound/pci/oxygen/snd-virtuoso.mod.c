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
	{ 0x86a998c8, "_dev_crit" },
	{ 0xb177d101, "seq_printf" },
	{ 0xa59a9d91, "oxygen_read16" },
	{ 0xf67bce8, "oxygen_pci_remove" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf531dc0e, "oxygen_write8_masked" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x9e709eae, "oxygen_write16_masked" },
	{ 0xb502b744, "oxygen_write_ac97_masked" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0xd2e6902c, "oxygen_write_spi" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf332796, "oxygen_pci_probe" },
	{ 0x9beeb25f, "snd_jack_new" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0xc540c44a, "oxygen_write16" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbe9e09c3, "snd_component_add" },
	{ 0x144fc26d, "oxygen_read8" },
	{ 0x952b2716, "oxygen_reset_uart" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xf7d0a6e9, "oxygen_write_uart" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x3761e12f, "oxygen_write_i2c" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x20cda06d, "oxygen_pci_pm" },
	{ 0xd9522ab, "oxygen_pci_shutdown" },
	{ 0x56945cbd, "snd_jack_report" },
	{ 0xa6de447a, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-oxygen-lib,snd");

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "4E966709DD6CE78B2585E1F");
