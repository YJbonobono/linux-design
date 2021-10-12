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
	{ 0x845aa525, "dm_unregister_target" },
	{ 0xa8db51d6, "dm_register_target" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x126a75a3, "dm_per_bio_data" },
	{ 0xc5850110, "printk" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeddddc33, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa4b4d90, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf0e6ae26, "dm_bio_from_per_bio_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96848186, "scnprintf" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A239C0131B654EB7DED1C54");
