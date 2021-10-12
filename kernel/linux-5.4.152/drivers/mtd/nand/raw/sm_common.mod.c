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
	{ 0xc5850110, "printk" },
	{ 0x1a70de86, "mtd_write_oob" },
	{ 0xbe448051, "nand_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc1e34ea0, "nand_scan_with_ids" },
	{ 0x41509bb8, "mtd_device_parse_register" },
};

MODULE_INFO(depends, "mtd,nand");


MODULE_INFO(srcversion, "173023B9162CFB5F1FDBAED");
