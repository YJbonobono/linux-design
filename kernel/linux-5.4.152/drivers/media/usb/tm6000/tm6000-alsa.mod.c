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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0xdcdf2d0c, "tm6000_unregister_extension" },
	{ 0xaafde966, "tm6000_register_extension" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xec02f621, "tm6000_set_audio_bitrate" },
	{ 0x4489d133, "tm6000_set_reg_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbe9e09c3, "snd_component_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0xfaa9a0d6, "snd_pcm_hw_constraint_pow2" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xc5850110, "printk" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xde5bafde, "snd_pcm_stream_unlock" },
	{ 0xaf6ee467, "snd_pcm_stream_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,tm6000,snd");


MODULE_INFO(srcversion, "94EB9BD787CDDDCD227B682");
