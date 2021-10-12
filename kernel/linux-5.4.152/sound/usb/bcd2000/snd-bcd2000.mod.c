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
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x77de4c71, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4876b761, "usb_urb_ep_type_check" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x901fe54f, "snd_rawmidi_transmit" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");

MODULE_ALIAS("usb:v1397p00BDd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C98481D5BC39C62A19FA101");
