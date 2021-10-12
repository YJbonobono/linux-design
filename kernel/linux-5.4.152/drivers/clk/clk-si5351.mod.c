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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x157c66fa, "devm_clk_hw_register" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe310bf90, "clk_hw_get_name" },
	{ 0x2d6451b, "clk_hw_get_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si5351a");
MODULE_ALIAS("i2c:si5351a-msop");
MODULE_ALIAS("i2c:si5351b");
MODULE_ALIAS("i2c:si5351c");

MODULE_INFO(srcversion, "39BFE5B929905B3B1E63BF4");
