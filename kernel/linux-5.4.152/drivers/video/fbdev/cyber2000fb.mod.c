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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xa916b694, "strnlen" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("pci:v000010EAd00002000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EAd00002010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EAd00005000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BFF496DD2A247723656578A");
