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
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0x552748e0, "unregister_console" },
	{ 0xdca121b6, "register_console" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0xc7dccae3, "tty_port_link_device" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5B253AB01C338BDF703B18");
