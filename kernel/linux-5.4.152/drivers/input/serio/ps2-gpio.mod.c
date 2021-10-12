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
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x49c89b60, "serio_interrupt" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x29361773, "complete" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x55d56a61, "__serio_register_port" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x8df9e738, "gpiod_cansleep" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xcdb4aa41, "serio_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3AA0F1CC2876935F1A5082E");
