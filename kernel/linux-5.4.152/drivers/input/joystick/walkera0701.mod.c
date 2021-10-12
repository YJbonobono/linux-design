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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x53ca4226, "input_free_device" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xeca19776, "parport_negotiate" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf8c679e2, "input_event" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x979ffaf2, "parport_claim" },
	{ 0x2d3e250, "parport_release" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "B3DB6B3396D41A54F2275C2");
