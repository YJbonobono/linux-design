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
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fada, "strncpy" },
	{ 0xef5ef19c, "dsa_unregister_switch" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6f3517ff, "dsa_switch_alloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0xd85045e2, "dsa_register_switch" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("of:N*T*Crealtek,rtl8366rb");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366rbC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366s");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366sC*");

MODULE_INFO(srcversion, "A366F625859391CB3551177");
