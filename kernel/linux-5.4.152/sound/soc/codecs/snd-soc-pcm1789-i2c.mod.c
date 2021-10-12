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
	{ 0x65aea497, "pcm1789_regmap_config" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbefc644, "pcm1789_common_exit" },
	{ 0x5e0972b6, "pcm1789_common_init" },
};

MODULE_INFO(depends, "snd-soc-pcm1789-codec");

MODULE_ALIAS("i2c:pcm1789");
MODULE_ALIAS("of:N*T*Cti,pcm1789");
MODULE_ALIAS("of:N*T*Cti,pcm1789C*");

MODULE_INFO(srcversion, "0CBC03AD888676FBE64E8F9");
