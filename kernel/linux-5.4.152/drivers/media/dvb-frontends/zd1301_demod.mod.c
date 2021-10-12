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
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0xee821553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB90099C21E9DB49E320CD8");
