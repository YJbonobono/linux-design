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
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa03fd67b, "memstick_alloc_host" },
	{ 0xaa8939ac, "memstick_free_host" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2d2a5de5, "memstick_suspend_host" },
	{ 0x89558cf4, "memstick_detect_change" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x9ca37bd1, "memstick_resume_host" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5665bd53, "memstick_remove_host" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x44458f85, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0xaf08c2d3, "memstick_next_req" },
	{ 0x52f694f5, "memstick_add_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "memstick");

MODULE_ALIAS("pci:v00001180d00000592sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5A20BDA7AE7C31CCCFB92F7");
