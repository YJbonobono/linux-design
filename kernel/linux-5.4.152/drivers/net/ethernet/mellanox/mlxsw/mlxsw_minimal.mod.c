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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0x92fdf8f2, "mlxsw_core_driver_unregister" },
	{ 0x76a65e3b, "mlxsw_core_port_init" },
	{ 0xca34ccf, "mlxsw_core_max_ports" },
	{ 0xc5850110, "printk" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x83530bfa, "mlxsw_i2c_driver_unregister" },
	{ 0x9ed04254, "mlxsw_core_port_eth_set" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbe82d6cc, "mlxsw_env_get_module_info" },
	{ 0x44e9b845, "mlxsw_core_driver_register" },
	{ 0x438cdeee, "mlxsw_core_port_devlink_port_get" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x614ec038, "mlxsw_env_get_module_eeprom" },
	{ 0x356bd6fc, "mlxsw_i2c_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mlxsw_core,mlxsw_i2c");

MODULE_ALIAS("i2c:mlxsw_minimal");

MODULE_INFO(srcversion, "AB5A8B2340EE0AE09E909C1");
