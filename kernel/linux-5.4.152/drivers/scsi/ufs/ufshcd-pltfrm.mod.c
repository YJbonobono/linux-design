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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xdf837e8a, "ufshcd_runtime_suspend" },
	{ 0xd7d00d18, "ufshcd_alloc_host" },
	{ 0x114618e6, "ufshcd_system_suspend" },
	{ 0x2fbeea43, "ufshcd_init" },
	{ 0x74f31809, "ufshcd_system_resume" },
	{ 0xdefb4b32, "ufshcd_shutdown" },
	{ 0xc5850110, "printk" },
	{ 0xeb5573fb, "ufshcd_runtime_idle" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xd071eb7e, "ufshcd_runtime_resume" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x738a180, "ufshcd_dealloc_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "ufshcd-core");


MODULE_INFO(srcversion, "8515CE16B09EB8C31D8E7BB");
