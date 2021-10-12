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
	{ 0x7d64cb19, "iio_unregister_sw_trigger_type" },
	{ 0x34994fc4, "iio_register_sw_trigger_type" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0xd58b29b6, "iio_trigger_alloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x130b568, "wake_up_process" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x37a0cba, "kfree" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,industrialio");


MODULE_INFO(srcversion, "C4982957715C5D006D1147C");
