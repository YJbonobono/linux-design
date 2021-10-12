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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd541976, "dw_spi_add_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaba215c6, "dw_spi_remove_host" },
	{ 0xe48ea87f, "dw_spi_set_cs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-dw");

MODULE_ALIAS("acpi*:HISI0173:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssi");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spi");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spiC*");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spi");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spiC*");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssi");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssiC*");

MODULE_INFO(srcversion, "1B98E8BF9D7630F15646E92");
