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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x8b14a2c0, "mlxsw_core_trap_register" },
	{ 0x92fdf8f2, "mlxsw_core_driver_unregister" },
	{ 0x76a65e3b, "mlxsw_core_port_init" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xe717223f, "mlxsw_pci_driver_register" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7ae53467, "mlxsw_pci_driver_unregister" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xca34ccf, "mlxsw_core_max_ports" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x581cf443, "skb_push" },
	{ 0x9ed04254, "mlxsw_core_port_eth_set" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd252e62d, "mlxsw_core_skb_transmit_busy" },
	{ 0x44e9b845, "mlxsw_core_driver_register" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x438cdeee, "mlxsw_core_port_devlink_port_get" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7362814b, "mlxsw_core_trap_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0xbfd01f33, "mlxsw_core_port_ib_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf1022f6e, "mlxsw_core_skb_transmit" },
	{ 0x8854d198, "mlxsw_reg_write" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xf4909bea, "mlxsw_core_port_type_get" },
};

MODULE_INFO(depends, "mlxsw_core,mlxsw_pci");

MODULE_ALIAS("pci:v000015B3d0000C738sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21EAC3B991EC4CE60EBB17E");
