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
	{ 0x138133c8, "param_ops_charp" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xf8c679e2, "input_event" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0D8Cp000Ed*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "2D334E8A50B1B0C5084A96E");
