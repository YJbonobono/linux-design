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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x116137c9, "tifm_unregister_driver" },
	{ 0x82a3451a, "tifm_register_driver" },
	{ 0x2ce95a05, "tifm_eject" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6006847, "current_task" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbbf1aa5b, "tifm_map_sg" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x52f694f5, "memstick_add_host" },
	{ 0xaf7623e7, "tifm_has_ms_pif" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa03fd67b, "memstick_alloc_host" },
	{ 0x996f445, "tifm_unmap_sg" },
	{ 0xaa8939ac, "memstick_free_host" },
	{ 0x5665bd53, "memstick_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf08c2d3, "memstick_next_req" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2d2a5de5, "memstick_suspend_host" },
	{ 0x9ca37bd1, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core,memstick");


MODULE_INFO(srcversion, "B3210FFB9D6C76EEC0E93E2");
