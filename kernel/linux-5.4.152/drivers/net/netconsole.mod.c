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
	{ 0x66d230ae, "param_ops_string" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x3d9dd6d3, "configfs_unregister_subsystem" },
	{ 0x552748e0, "unregister_console" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x81b59f6b, "configfs_register_subsystem" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x664f4f51, "config_group_init" },
	{ 0x85df9b6c, "strsep" },
	{ 0x92de65bc, "netpoll_parse_options" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x96848186, "scnprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa07a37f0, "memchr" },
	{ 0x3cf807df, "netpoll_send_udp" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xdca121b6, "register_console" },
	{ 0xff4a3757, "netpoll_setup" },
	{ 0x51a59b84, "netpoll_print_options" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6e9b5574, "netpoll_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6870aa81, "__netpoll_cleanup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb3051965, "config_item_put" },
	{ 0xe9953458, "config_item_get" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "59AB6DED122C4E32C764A4A");
