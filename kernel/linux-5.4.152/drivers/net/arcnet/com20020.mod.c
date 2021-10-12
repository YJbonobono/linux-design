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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x58de406a, "arcnet_send_packet" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xecb730b0, "arcnet_interrupt" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xe296672d, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0x629d200, "arcnet_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xfb0746be, "arcnet_close" },
	{ 0xd4b8282f, "arcnet_open" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "arcnet");


MODULE_INFO(srcversion, "BB23AA6DE50405C805DDF1B");
