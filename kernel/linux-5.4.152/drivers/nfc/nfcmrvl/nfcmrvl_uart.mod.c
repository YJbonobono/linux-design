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
	{ 0xc1e46c8e, "nfcmrvl_nci_unregister_dev" },
	{ 0x142b399a, "nfcmrvl_nci_recv_frame" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x14c38a56, "nci_uart_set_config" },
	{ 0xc5850110, "printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc127d82, "nfcmrvl_nci_register_dev" },
	{ 0xd98658db, "nci_uart_unregister" },
	{ 0x7e5bdb6c, "nci_uart_register" },
	{ 0x83b05a16, "param_ops_uint" },
};

MODULE_INFO(depends, "nfcmrvl,nci_uart");


MODULE_INFO(srcversion, "4D370DFC94A8F549D7F8686");
