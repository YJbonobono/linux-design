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
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3acfceab, "wm831x_set_bits" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0x1208a414, "seq_putc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1226ef6f, "gpiochip_is_requested" },
	{ 0xb177d101, "seq_printf" },
	{ 0x3cb699f2, "wm831x_reg_read" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C9A2CD24B54889DD074442F");
