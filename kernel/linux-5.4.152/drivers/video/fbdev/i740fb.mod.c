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
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0x37a0cba, "kfree" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x65c5cc34, "fb_ddc_read" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x7fbe93e7, "pci_ioremap_wc_bar" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x4755bb62, "fb_validate_mode" },
	{ 0xc5850110, "printk" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xc631580a, "console_unlock" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x6db25140, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_ddc,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E25436C87BB7F415C9DC481");
