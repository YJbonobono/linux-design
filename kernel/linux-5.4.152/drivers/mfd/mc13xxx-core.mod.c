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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5d98fcd0, "regmap_irq_get_domain" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9ee3af0f, "regmap_add_irq_chip" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "13601FFE26EBC6BA8183EA0");
