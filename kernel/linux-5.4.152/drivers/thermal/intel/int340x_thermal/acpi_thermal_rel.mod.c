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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfd205417, "no_llseek" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8eb423bd, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xc5850110, "printk" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x93082893, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "039927A9722BED6E29FABEC");
