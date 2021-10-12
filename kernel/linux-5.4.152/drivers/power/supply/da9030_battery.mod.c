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
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87a67f49, "single_open" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x4c794ca9, "da903x_register_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd298eef3, "da903x_writes" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xee14626a, "da903x_query_status" },
	{ 0x8b30d09e, "da903x_reads" },
	{ 0x41cddd42, "da903x_read" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5414825d, "da903x_unregister_notifier" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xe6b9cb81, "da903x_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C529036089C335E2C336AD");
