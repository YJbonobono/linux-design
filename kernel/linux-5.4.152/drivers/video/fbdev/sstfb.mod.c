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
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x85df9b6c, "strsep" },
	{ 0xab781570, "fb_get_options" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0x5792f848, "strlcpy" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC4E8CFF34F33B2AC43F208");
