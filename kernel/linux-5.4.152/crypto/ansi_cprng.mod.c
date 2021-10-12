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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4bb67b4d, "crypto_unregister_rngs" },
	{ 0xc0cfdf91, "crypto_register_rngs" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x93bc49d5, "crypto_alloc_base" },
	{ 0xc5850110, "printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "581CDFED1DA20807119026B");
