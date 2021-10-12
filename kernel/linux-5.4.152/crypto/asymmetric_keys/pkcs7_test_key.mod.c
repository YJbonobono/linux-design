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
	{ 0xec01448a, "generic_key_instantiate" },
	{ 0xf7a2687e, "user_free_preparse" },
	{ 0x14e1fc1d, "user_read" },
	{ 0xc5850110, "printk" },
	{ 0x8e9b5148, "user_describe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc8e3c98, "register_key_type" },
	{ 0x433ae21c, "user_preparse" },
	{ 0x422ce162, "unregister_key_type" },
	{ 0x4e92850b, "user_revoke" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xe9bd5558, "user_destroy" },
	{ 0x58a76393, "verify_pkcs7_signature" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6A833E4ADEC602483AED5BA");
