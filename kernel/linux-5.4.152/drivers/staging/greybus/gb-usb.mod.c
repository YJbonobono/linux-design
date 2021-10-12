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
	{ 0x9c30bd95, "gb_gbphy_register_driver" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0xfbe8a140, "gb_gbphy_deregister_driver" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x26b4912b, "gb_operation_sync_timeout" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x73916598, "gb_operation_request_send_sync_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0xdc99c78d, "usb_hcd_resume_root_hub" },
	{ 0xa63dbd09, "gb_operation_put" },
	{ 0xa76db6a, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "D05FAA9A391F5997406B22E");
