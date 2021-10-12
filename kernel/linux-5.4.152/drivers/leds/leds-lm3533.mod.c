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
	{ 0xed648a60, "lm3533_ctrlbank_enable" },
	{ 0xd65960c8, "lm3533_ctrlbank_set_max_current" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x249a451b, "lm3533_ctrlbank_get_brightness" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdd8285b6, "lm3533_ctrlbank_get_pwm" },
	{ 0x9a53b559, "lm3533_ctrlbank_set_pwm" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0xb0115721, "lm3533_read" },
	{ 0xe7a35f04, "lm3533_write" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x20940515, "lm3533_ctrlbank_disable" },
	{ 0xe1175b5f, "lm3533_ctrlbank_set_brightness" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x77736c77, "lm3533_update" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lm3533-ctrlbank,lm3533-core");


MODULE_INFO(srcversion, "B582A0C4CD09C97EA864379");
