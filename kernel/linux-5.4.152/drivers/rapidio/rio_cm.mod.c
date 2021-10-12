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
	{ 0x19b208a6, "rio_bus_type" },
	{ 0xeea84570, "rio_mport_class" },
	{ 0x51ce92, "device_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4fc2d391, "class_interface_unregister" },
	{ 0x971f0b73, "subsys_interface_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x97d452, "cdev_add" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x5844ac22, "subsys_interface_register" },
	{ 0x34199ef9, "class_interface_register" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x52977a3a, "__class_create" },
	{ 0x6006847, "current_task" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x53b954a2, "up_read" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x668b19a1, "down_read" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xfd94814e, "complete_all" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfc10eb7e, "rio_release_outb_mbox" },
	{ 0xde1e9153, "rio_release_inb_mbox" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9b41dff7, "rio_request_inb_mbox" },
	{ 0x35ed8da3, "rio_request_outb_mbox" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x954f099c, "idr_preload" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x29361773, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "022962BEF13599E9148A415");
