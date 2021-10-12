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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x5bafa8fd, "usb_init_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5052ba6b, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x915d9e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd5dbf683, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4876b761, "usb_urb_ep_type_check" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x51eb09a5, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x53ca4226, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xcb9d68ec, "snd_pcm_limit_hw_rates" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x901fe54f, "snd_rawmidi_transmit" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xd05ef65f, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F759D6A3FBC8A3314E7EB77");
