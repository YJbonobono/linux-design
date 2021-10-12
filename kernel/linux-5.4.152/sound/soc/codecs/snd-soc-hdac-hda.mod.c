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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xf7af8561, "snd_hda_codec_prepare" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x592bd96d, "snd_hdac_ext_bus_get_link" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x3b77542a, "snd_hda_codec_device_new" },
	{ 0x1d4362a1, "snd_hdac_ext_bus_link_put" },
	{ 0x3fe4eba9, "snd_hda_codec_parse_pcms" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8f978a8d, "snd_hda_codec_set_name" },
	{ 0x643d3e60, "snd_hdac_ext_bus_link_get" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5655d9dc, "snd_hda_codec_pcm_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc06c6ee8, "snd_hda_codec_cleanup" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcf3bbaef, "snd_hda_codec_build_controls" },
	{ 0x157448b4, "snd_hdac_regmap_init" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-ext-core,snd-hda-core,snd-soc-core");


MODULE_INFO(srcversion, "9AC4E62671FEA3708D0FE16");
