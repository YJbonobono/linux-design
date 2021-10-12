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
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf7a543c1, "m_can_class_register" },
	{ 0xb15e3078, "m_can_init_ram" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xa6006961, "m_can_class_get_clocks" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe2b36f86, "m_can_class_allocate_dev" },
	{ 0x635fcbe, "m_can_class_unregister" },
	{ 0x130e1b15, "m_can_class_suspend" },
	{ 0x6854962e, "m_can_class_resume" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "m_can");

MODULE_ALIAS("of:N*T*Cbosch,m_can");
MODULE_ALIAS("of:N*T*Cbosch,m_canC*");

MODULE_INFO(srcversion, "95D738C6D17E9BB7B89A484");
