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
	{ 0xa24f23d8, "__request_module" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x4a00db8b, "snd_hdac_acomp_exit" },
	{ 0xacca5013, "snd_hdac_display_power" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x97c17ef1, "device_attach" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x76a15328, "snd_hdac_i915_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf8818a58, "snd_hdac_ext_bus_device_init" },
	{ 0x6b71d159, "snd_hdac_codec_modalias" },
	{ 0xd148ef82, "snd_hdac_bus_get_response" },
	{ 0x54cc1825, "snd_hdac_bus_send_cmd" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-ext-core");


MODULE_INFO(srcversion, "99384D8314ED852F9B15D53");
