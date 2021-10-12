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
	{ 0x138133c8, "param_ops_charp" },
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdede2dd4, "sm501_modify_reg" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x715bacf8, "fb_set_cmap" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf0676c61, "sm501_misc_control" },
	{ 0xbbb2bd1e, "sm501_set_clock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc69d2930, "sm501_unit_power" },
	{ 0x999e8297, "vfree" },
	{ 0xc631580a, "console_unlock" },
	{ 0x6db25140, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sm501");


MODULE_INFO(srcversion, "7C00ADF709C5C92B3FB6FD1");
