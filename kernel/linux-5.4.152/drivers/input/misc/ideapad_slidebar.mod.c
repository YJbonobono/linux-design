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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xb1d86bc1, "platform_device_del" },
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf8c679e2, "input_event" },
	{ 0x49c89b60, "serio_interrupt" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4791395b, "i8042_remove_filter" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x1a30f5d9, "i8042_install_filter" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20017*:pvr*LenovoIdeaPadY550*:");
MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20035*:pvr*LenovoIdeaPadY550P*:");

MODULE_INFO(srcversion, "D9237722A08D77EEFE91FCC");
