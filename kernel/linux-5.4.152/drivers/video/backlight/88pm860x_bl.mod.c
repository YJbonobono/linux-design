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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x9c1eec55, "pm8606_osc_enable" },
	{ 0xb8bb1f55, "pm8606_osc_disable" },
	{ 0xc8cf93c, "pm860x_set_bits" },
	{ 0x74236285, "pm860x_reg_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xddff5a51, "devm_backlight_device_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3075987b, "pm860x_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "97BE02CC7F043F00506F917");
