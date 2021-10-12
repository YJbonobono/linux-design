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
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010CFd00002019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd0000201Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd0000202Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8610BC08875B664B51D84D3");
