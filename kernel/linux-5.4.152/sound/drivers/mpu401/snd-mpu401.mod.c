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
	{ 0x754d539c, "strlen" },
	{ 0x5d2b89e7, "snd_mpu401_uart_new" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x718a59be, "pnp_unregister_driver" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x77de4c71, "snd_card_free_when_closed" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x7e1bb40c, "pnp_register_driver" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xcc4bab63, "pnp_get_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xaac4b1ab, "param_ops_long" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xee821553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-mpu401-uart,snd");

MODULE_ALIAS("pnp:dPNPb006*");
MODULE_ALIAS("acpi*:PNPB006:*");

MODULE_INFO(srcversion, "3D9F21361544FBFB7BC225F");
