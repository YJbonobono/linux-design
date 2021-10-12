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
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xbf28d592, "ovs_netdev_tunnel_destroy" },
	{ 0xa59eb594, "ovs_vport_ops_unregister" },
	{ 0xd04061e5, "__ovs_vport_ops_register" },
	{ 0xc588057d, "ovs_vport_free" },
	{ 0x6df58cac, "rtnl_delete_link" },
	{ 0x64676a30, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7f697ce0, "dev_change_flags" },
	{ 0x4234bbdf, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x55acacb0, "ovs_vport_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "979C4C01C29D396CAADEF2A");
