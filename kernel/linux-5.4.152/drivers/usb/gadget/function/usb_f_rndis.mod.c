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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xac86cd23, "usb_gstrings_attach" },
	{ 0xd25e864c, "usb_free_all_descriptors" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x754d539c, "strlen" },
	{ 0x894055e5, "gether_get_qmult" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x750f503b, "gether_setup_name_default" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x404ea3a, "gether_get_ifname" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x531c923b, "usb_function_unregister" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x4f7afd55, "gether_set_host_addr" },
	{ 0x25883fa, "gether_get_dev_addr" },
	{ 0x1f3d45bd, "gether_connect" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5e445b6f, "usb_ep_autoconfig" },
	{ 0x30c76023, "free_netdev" },
	{ 0xffb7c514, "ida_free" },
	{ 0xadaa7038, "gether_set_gadget" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe0ab633c, "gether_get_host_addr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xdc62fc89, "gether_set_qmult" },
	{ 0xc003610c, "gether_get_host_addr_u8" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9b9e4645, "usb_function_register" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x14bb514b, "gether_register_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe0076790, "gether_set_dev_addr" },
	{ 0x8a880b04, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf20e688, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf53738b, "usb_assign_descriptors" },
	{ 0x4981fa7b, "usb_interface_id" },
	{ 0xb832485a, "consume_skb" },
	{ 0xf1dd6c6c, "usb_os_desc_prepare_interf_dir" },
	{ 0x880a9eba, "dev_get_stats" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_ether");


MODULE_INFO(srcversion, "AF73342FC73134B8522C959");
