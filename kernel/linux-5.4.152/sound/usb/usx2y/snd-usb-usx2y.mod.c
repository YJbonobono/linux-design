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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xcd260832, "snd_pcm_stop_xrun" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x81666bb4, "snd_pcm_lib_preallocate_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x712a1a26, "snd_hwdep_new" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6416f271, "__snd_usbmidi_create" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0x4876b761, "usb_urb_ep_type_check" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x2943ec09, "usb_get_current_frame_number" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd,snd-hwdep");

MODULE_ALIAS("usb:v1604p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3E41A246FFCD81FCCE705D1");
