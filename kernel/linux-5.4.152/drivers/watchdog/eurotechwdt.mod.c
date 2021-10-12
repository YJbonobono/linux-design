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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xfd205417, "no_llseek" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x85bd1608, "__request_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x93082893, "misc_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xf9575308, "stream_open" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9ADB4AFE603C3CA1542EBC3");
