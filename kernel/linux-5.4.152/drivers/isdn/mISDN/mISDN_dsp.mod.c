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
	{ 0x2d3385d3, "system_wq" },
	{ 0x593b0722, "mISDN_unregister_Bprotocol" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xd285995f, "mISDN_clock_get" },
	{ 0xe5a01321, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x24d273d1, "add_timer" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c399657, "mISDN_register_Bprotocol" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc0cca725, "class_destroy" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x51ce92, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb832485a, "consume_skb" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x52977a3a, "__class_create" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "EDA301723CBB19BA6A2323A");
