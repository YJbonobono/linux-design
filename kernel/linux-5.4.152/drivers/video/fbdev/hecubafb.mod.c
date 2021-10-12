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
	{ 0x563ff186, "fb_sys_read" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4313e3f3, "sys_fillrect" },
	{ 0xac588b7c, "sys_copyarea" },
	{ 0x5127158b, "sys_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xc01232b9, "fb_deferred_io_init" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x999e8297, "vfree" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x38b008a8, "fb_deferred_io_cleanup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "499D718CB5F922AD4A17F23");
