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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x65a72234, "comedi_usb_auto_unconfig" },
	{ 0xe58761af, "comedi_usb_driver_unregister" },
	{ 0x84fb26ab, "comedi_usb_driver_register" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x35518cc1, "comedi_alloc_subdev_readback" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xcf87c652, "comedi_load_firmware" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xd3ef7a5e, "comedi_to_usb_interface" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xfb578fc5, "memset" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x55839821, "comedi_event" },
	{ 0x83f5fe41, "comedi_buf_read_samples" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb8c2ee16, "comedi_readback_insn_read" },
	{ 0x991f8541, "comedi_dio_update_state" },
	{ 0xff73f159, "comedi_dio_insn_config" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x499a0656, "comedi_to_usb_dev" },
	{ 0xb1294d9e, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v13D8p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D8p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA4918845DA98C0BF0ADF77");
