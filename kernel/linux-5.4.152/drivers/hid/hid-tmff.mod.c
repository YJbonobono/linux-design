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
	{ 0xc5850110, "printk" },
	{ 0xe0851549, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5495392, "hid_debug" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xea8e2574, "input_ff_create_memless" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v0000044Fp0000B300");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B304");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B320");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B323");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B324");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B605");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B651");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B653");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B654");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B65A");

MODULE_INFO(srcversion, "DE8A8EE22D083B38FBFA975");
