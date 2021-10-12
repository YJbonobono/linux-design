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
	{ 0xd25e864c, "usb_free_all_descriptors" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xd5fdbdc1, "usb_ep_autoconfig_release" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x531c923b, "usb_function_unregister" },
	{ 0xfb578fc5, "memset" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5e445b6f, "usb_ep_autoconfig" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9b9e4645, "usb_function_register" },
	{ 0x6dc11b4d, "alloc_ep_req" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x8a880b04, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x36d5b828, "usb_string_id" },
	{ 0xf53738b, "usb_assign_descriptors" },
	{ 0x4981fa7b, "usb_interface_id" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "A761F95F182227FB5C1BE2C");
