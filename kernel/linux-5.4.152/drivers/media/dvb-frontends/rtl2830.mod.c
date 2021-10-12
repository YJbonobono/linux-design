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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x272c5d5a, "i2c_mux_add_adapter" },
	{ 0x9e6b178e, "i2c_mux_alloc" },
	{ 0x3b569336, "__regmap_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbc09f2a0, "__i2c_transfer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8733236, "intlog10" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xc278437c, "regmap_exit" },
	{ 0x5e108ee9, "i2c_mux_del_adapters" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core");

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "E72AB134DE0133A0F2A4A01");
