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
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0x30b7b7d2, "ivtv_ext_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xbba745d6, "ivtv_init_on_first_open" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xaf6ee467, "snd_pcm_stream_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x13641ab3, "v4l2_fh_init" },
	{ 0xb5de9c17, "ivtv_stop_v4l2_encode_stream" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x2a5794e9, "ivtv_claim_stream" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xde5bafde, "snd_pcm_stream_unlock" },
	{ 0xa003da8f, "ivtv_release_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x41b82dec, "driver_find" },
	{ 0x8ae33921, "ivtv_start_v4l2_encode_stream" },
	{ 0xb4001ace, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "ivtv,snd-pcm,videodev,snd");


MODULE_INFO(srcversion, "C836E438638AF30FDE3E80E");
