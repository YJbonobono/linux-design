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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x41cddd42, "da903x_read" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf8c679e2, "input_event" },
	{ 0xee14626a, "da903x_query_status" },
	{ 0xe6b9cb81, "da903x_write" },
	{ 0xa052b5b1, "da903x_set_bits" },
	{ 0x4c794ca9, "da903x_register_notifier" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xca58fb2c, "da903x_clr_bits" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5414825d, "da903x_unregister_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E969E720628498A94FC17AF");
