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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xf3b47f67, "xp_partition_id" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x345c9217, "xpc_disconnect" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x68fa7d28, "xp_remote_memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb832485a, "consume_skb" },
	{ 0xead4f7fe, "xp_max_npartitions" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe68acd6c, "xpc_interface" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64ba5017, "xp_pa" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc04c7267, "xpc_connect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xp");


MODULE_INFO(srcversion, "A0EB1A3D2ECB9010C1F5C6B");
