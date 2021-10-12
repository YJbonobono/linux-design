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
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x979ffaf2, "parport_claim" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x2d3e250, "parport_release" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x46ba47d9, "blk_queue_bounce_limit" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc5850110, "printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "4A40D24F9B8F35A1371C10D");
