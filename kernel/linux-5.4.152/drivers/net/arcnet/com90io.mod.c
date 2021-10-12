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
	{ 0x66d230ae, "param_ops_string" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xecb730b0, "arcnet_interrupt" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xa1f7642a, "alloc_arcdev" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arcnet");


MODULE_INFO(srcversion, "0F57360AE025C5FB9121AE0");
