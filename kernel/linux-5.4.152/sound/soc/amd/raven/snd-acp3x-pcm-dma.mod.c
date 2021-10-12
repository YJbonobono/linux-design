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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xb15f213f, "snd_pcm_lib_default_mmap" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0xf50000ca, "snd_soc_rtdcom_lookup" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "58D9B66037BDACCCE41AB12");
