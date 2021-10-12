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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x14fc55be, "snd_dma_alloc_pages" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb4f1d78e, "snd_soc_set_runtime_hwparams" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xeb746335, "__devm_regmap_init_mmio_clk" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x287dc7ba, "dma_request_slave_channel" },
	{ 0x2a40e4fe, "snd_dmaengine_pcm_prepare_slave_config" },
	{ 0x846bb319, "snd_soc_dpcm_get_substream" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf50000ca, "snd_soc_rtdcom_lookup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe48ede9b, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5f47b51b, "__dma_request_channel" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cfsl,imx35-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx35-asrcC*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx53-asrcC*");

MODULE_INFO(srcversion, "0386034075B230435C7CAE8");
