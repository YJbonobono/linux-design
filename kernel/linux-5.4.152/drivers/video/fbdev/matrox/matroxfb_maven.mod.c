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
	{ 0x25cf8049, "matroxfb_PLL_calcclock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xc5850110, "printk" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matroxfb_misc");

MODULE_ALIAS("i2c:maven");

MODULE_INFO(srcversion, "D3464B0BA3CB356980A60A1");
