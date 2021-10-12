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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xa3b53740, "single_release" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb177d101, "seq_printf" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x521dd091, "snd_soc_set_ac97_ops" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cfsl,mpc8610-ssi");
MODULE_ALIAS("of:N*T*Cfsl,mpc8610-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx35-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx35-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx21-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx21-ssiC*");

MODULE_INFO(srcversion, "C002C92A00ECE9220C50015");
