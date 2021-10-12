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
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xffb7c514, "ida_free" },
	{ 0x335e4ce6, "device_add" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf5f515cb, "devres_release" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F45C09F47EBBC3A1419C5C5");
