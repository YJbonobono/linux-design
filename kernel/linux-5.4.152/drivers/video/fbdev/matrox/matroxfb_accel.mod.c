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
	{ 0xd7885357, "cfb_fillrect" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x38c33bd8, "cfb_copyarea" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F54940E05834AF72F6B9870");
