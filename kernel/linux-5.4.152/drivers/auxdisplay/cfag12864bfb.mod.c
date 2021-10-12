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
	{ 0x5127158b, "sys_imageblit" },
	{ 0xac588b7c, "sys_copyarea" },
	{ 0x4313e3f3, "sys_fillrect" },
	{ 0xb8449468, "fb_sys_write" },
	{ 0x563ff186, "fb_sys_read" },
	{ 0xecb2e5d, "cfag12864b_disable" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3389f926, "cfag12864b_enable" },
	{ 0x2ff9464, "cfag12864b_isinited" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc7dedd80, "vm_map_pages_zero" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5850110, "printk" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xc48e9d95, "cfag12864b_buffer" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b");


MODULE_INFO(srcversion, "492E23B4176913D75EE9A2D");
