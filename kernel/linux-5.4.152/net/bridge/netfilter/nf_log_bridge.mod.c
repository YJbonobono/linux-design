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
	{ 0xfe874c71, "nf_log_unregister" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xf9673c1c, "nf_log_register" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x39e61495, "nf_logger_request_module" },
	{ 0x3ff64e76, "nf_log_set" },
	{ 0x1744657b, "nf_log_unset" },
	{ 0xf39f7dec, "nf_log_l2packet" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "D84460C958661675F869594");
