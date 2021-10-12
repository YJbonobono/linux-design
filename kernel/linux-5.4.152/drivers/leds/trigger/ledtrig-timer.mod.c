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
	{ 0x63d4ee3f, "led_trigger_unregister" },
	{ 0xa6ed2662, "led_trigger_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5075112, "led_get_default_pattern" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6d45beab, "led_set_brightness" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x77114bb3, "led_blink_set" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "31600565754CB6CBF62318E");
