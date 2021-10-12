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
	{ 0x195b4d68, "dsa_switch_resume" },
	{ 0xf3490cd7, "flow_rule_match_ip" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x5972ee75, "flow_rule_match_ipv6_addrs" },
	{ 0x386b34cb, "flow_rule_match_ports" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xef5ef19c, "dsa_unregister_switch" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74741dd1, "ethtool_rx_flow_rule_create" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x744d7a6d, "b53_switch_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8a7a4f7d, "flow_rule_match_ipv4_addrs" },
	{ 0xaa461401, "dsa_switch_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8662871d, "ethtool_rx_flow_rule_destroy" },
};

MODULE_INFO(depends, "dsa_core,b53_common");

MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8C*");

MODULE_INFO(srcversion, "FCA8C13ED1E90D9892ED229");
