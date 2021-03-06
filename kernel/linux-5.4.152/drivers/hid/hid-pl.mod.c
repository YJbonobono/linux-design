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
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xea8e2574, "input_ff_create_memless" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xe0851549, "__hid_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v00000810p00000001");
MODULE_ALIAS("hid:b0003g*v00000810p00000002");
MODULE_ALIAS("hid:b0003g*v00000E8Fp00000003");
MODULE_ALIAS("hid:b0003g*v00000F30p00000111");

MODULE_INFO(srcversion, "5F2225997A30F2584613EEE");
