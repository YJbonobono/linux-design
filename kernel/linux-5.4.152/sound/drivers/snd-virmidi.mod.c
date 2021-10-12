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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xacb0c516, "snd_virmidi_new" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xee821553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd,snd-seq-virmidi");


MODULE_INFO(srcversion, "4E96B6DC7109927991C1703");
