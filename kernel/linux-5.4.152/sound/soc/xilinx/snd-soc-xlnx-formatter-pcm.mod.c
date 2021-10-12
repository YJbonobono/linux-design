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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb3c189c2, "snd_pcm_hw_constraint_step" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb4f1d78e, "snd_soc_set_runtime_hwparams" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0xf50000ca, "snd_soc_rtdcom_lookup" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cxlnx,audio-formatter-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,audio-formatter-1.0C*");

MODULE_INFO(srcversion, "E7259F00DE0B2F00357EE87");
