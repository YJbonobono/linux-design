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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xf96fbbdd, "regmap_multi_reg_write" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0xa81af661, "ieee802154_register_hw" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4817b006, "ieee802154_alloc_hw" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x9dd70d96, "ieee802154_xmit_complete" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7e21bbe, "ieee802154_rx_irqsafe" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x485f8d08, "spi_async" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xeac25319, "ieee802154_free_hw" },
	{ 0x3d5d6c8, "ieee802154_unregister_hw" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:mcr20a");
MODULE_ALIAS("of:N*T*Cnxp,mcr20a");
MODULE_ALIAS("of:N*T*Cnxp,mcr20aC*");

MODULE_INFO(srcversion, "039CB43EF8EBE014A5E51B7");
