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
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf8c679e2, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x114ea56b, "da9052_request_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3de7b968, "da9052_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "14DDF8798D2CD02425127AD");
