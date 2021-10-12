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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6833822f, "netif_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0xb832485a, "consume_skb" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x71dc307b, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x85493c9, "__alloc_pages_nodemask" },
	{ 0x618911fc, "numa_node" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe296672d, "register_netdev" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x30c76023, "free_netdev" },
	{ 0x2e985a00, "usb_driver_claim_interface" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0xaa18ea3, "cdc_parse_cdc_header" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xd9afef59, "usb_driver_release_interface" },
	{ 0x16765b24, "phonet_header_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "phonet");

MODULE_ALIAS("usb:v0421p*d*dc*dsc*dp*ic02iscFEip*in*");

MODULE_INFO(srcversion, "C272FC3DD6F59F034381CBF");
