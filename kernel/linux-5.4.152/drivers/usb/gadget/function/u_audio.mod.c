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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x9acff9d1, "_snd_pcm_stream_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf2d15857, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a880b04, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
};

MODULE_INFO(depends, "udc-core,snd-pcm,snd,libcomposite");


MODULE_INFO(srcversion, "29C66EB6406DFD143F60FF0");
