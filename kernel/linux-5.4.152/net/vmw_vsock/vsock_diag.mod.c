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
	{ 0x76d96d07, "sock_diag_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ea1b695, "sock_i_ino" },
	{ 0x685b2f7a, "sock_diag_register" },
	{ 0x9bb6fd09, "vsock_connected_table" },
	{ 0x284e07d8, "vsock_bind_table" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4250b3eb, "sock_diag_save_cookie" },
	{ 0xc92f7f50, "vsock_table_lock" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x7b2112df, "__netlink_dump_start" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "B2C1B7CC7644E72B66D6647");
