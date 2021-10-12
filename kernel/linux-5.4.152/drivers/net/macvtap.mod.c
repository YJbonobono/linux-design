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
	{ 0xdde959c2, "net_ns_type_operations" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4dfa5ef1, "macvlan_link_register" },
	{ 0x929ad7a1, "tap_destroy_cdev" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x94567929, "__class_register" },
	{ 0x23b4d4cd, "tap_create_cdev" },
	{ 0x34888dee, "macvlan_common_newlink" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0xf6aff627, "tap_handle_frame" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0x9a9cd14e, "device_create" },
	{ 0xa0107dd9, "tap_free_minor" },
	{ 0x361fe89f, "device_destroy" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x231132, "tap_queue_resize" },
	{ 0xa1b29491, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x53352b16, "macvlan_common_setup" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0xa6cfb2c6, "macvlan_dellink" },
	{ 0x1ee60859, "tap_del_queues" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "macvlan,tap");


MODULE_INFO(srcversion, "411FE2DCB22C97B0FDAFEB4");
