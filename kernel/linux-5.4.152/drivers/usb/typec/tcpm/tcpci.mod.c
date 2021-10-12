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
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0xea220941, "tcpm_tcpc_reset" },
	{ 0x3074b82d, "device_get_named_child_node" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3c33e75c, "tcpm_register_port" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x6fb0aca0, "regmap_raw_read" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "tcpm");

MODULE_ALIAS("i2c:tcpci");

MODULE_INFO(srcversion, "84E31D06D2C29AA2B07E7AD");
