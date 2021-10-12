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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf8c679e2, "input_event" },
	{ 0x6a907754, "mc13xxx_adc_do_conversion" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x47daab41, "mc13xxx_irq_request" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb8298a67, "mc13xxx_unlock" },
	{ 0xccd39e24, "mc13xxx_irq_free" },
	{ 0xf943e9be, "mc13xxx_reg_rmw" },
	{ 0x53a1b95c, "mc13xxx_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");


MODULE_INFO(srcversion, "F6A02FB902F3E4A6099E53D");
