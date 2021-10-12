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
	{ 0xac86cd23, "usb_gstrings_attach" },
	{ 0xd25e864c, "usb_free_all_descriptors" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x894055e5, "gether_get_qmult" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x750f503b, "gether_setup_name_default" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x28bbcca, "gether_get_host_addr_cdc" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x404ea3a, "gether_get_ifname" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x531c923b, "usb_function_unregister" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x4f7afd55, "gether_set_host_addr" },
	{ 0x25883fa, "gether_get_dev_addr" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x1f3d45bd, "gether_connect" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5e445b6f, "usb_ep_autoconfig" },
	{ 0x30c76023, "free_netdev" },
	{ 0xadaa7038, "gether_set_gadget" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe0ab633c, "gether_get_host_addr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xdc62fc89, "gether_set_qmult" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9b9e4645, "usb_function_register" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x14bb514b, "gether_register_netdev" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe0076790, "gether_set_dev_addr" },
	{ 0x8a880b04, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf20e688, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xf53738b, "usb_assign_descriptors" },
	{ 0x4981fa7b, "usb_interface_id" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0xf1dd6c6c, "usb_os_desc_prepare_interf_dir" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_ether");


MODULE_INFO(srcversion, "0DA859AFE053984372F8B29");
