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
	{ 0x3a970585, "line6_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x2e985a00, "usb_driver_claim_interface" },
	{ 0xf4e6e344, "snd_card_add_dev_attr" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9bd1c2c0, "line6_init_pcm" },
	{ 0xea8c23b3, "line6_suspend" },
	{ 0xcd5ab2b6, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd9afef59, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "EB88139F64F6DC499581B39");
