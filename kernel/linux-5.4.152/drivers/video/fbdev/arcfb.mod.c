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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4313e3f3, "sys_fillrect" },
	{ 0xac588b7c, "sys_copyarea" },
	{ 0x5127158b, "sys_imageblit" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x999e8297, "vfree" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "B2B8A1B8313F52CC9F00021");
