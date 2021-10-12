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
	{ 0x5efbe587, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb73457a2, "line6_resume" },
	{ 0x9ed5a463, "line6_probe" },
	{ 0xcae8358c, "line6_write_data" },
	{ 0x3a970585, "line6_disconnect" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xa7a4e29a, "line6_pcm_release" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x3829bd4b, "line6_pcm_acquire" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9bd1c2c0, "line6_init_pcm" },
	{ 0xea8c23b3, "line6_suspend" },
	{ 0xcd5ab2b6, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "83E4D0F4FC4A1266CBAA202");
