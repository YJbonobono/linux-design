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
	{ 0x52dd0c09, "param_get_int" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xfd205417, "no_llseek" },
	{ 0x5de4a613, "ipmi_smi_watcher_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x127df4be, "ipmi_smi_watcher_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x77bc13a0, "strim" },
	{ 0x9166fada, "strncpy" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0xde4eeab5, "__register_nmi_handler" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf5531bea, "ipmi_poll_interface" },
	{ 0x58af3961, "param_set_int" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x93082893, "misc_deregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0xf1e046cc, "panic" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x89a5279a, "ipmi_get_version" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0xf9575308, "stream_open" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaca90ebd, "ipmi_request_supply_msgs" },
	{ 0x29361773, "complete" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "5089EA9F1F68064B1BC283C");
