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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xab781570, "fb_get_options" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc631580a, "console_unlock" },
	{ 0x6db25140, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000126Fd00000710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00000712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00000720sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D9160E2912AE2B16725BCD9");
