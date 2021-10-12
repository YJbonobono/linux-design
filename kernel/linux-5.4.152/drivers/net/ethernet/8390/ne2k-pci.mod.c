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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xf14a2178, "ei_poll" },
	{ 0xdd680caf, "ei_get_stats" },
	{ 0x17651293, "ei_tx_timeout" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x65db708c, "ei_set_multicast_list" },
	{ 0x7950f053, "ei_start_xmit" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xd8669c3d, "ei_open" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x119721ac, "ei_interrupt" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x230869e, "__alloc_ei_netdev" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2f20f2c4, "ei_close" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x2469e4ac, "NS8390_init" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "8390");

MODULE_ALIAS("pci:v000010ECd00008029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000940sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00001401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008E2Ed00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004A14d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010BDd00000E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00005A5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00005598sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008C4Ad00001980sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "47538193D9E3EEAEC274F2A");
