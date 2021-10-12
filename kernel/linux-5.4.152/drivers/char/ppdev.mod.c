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
	{ 0xfd205417, "no_llseek" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xc0cca725, "class_destroy" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0x52977a3a, "__class_create" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0x9a9cd14e, "device_create" },
	{ 0xcb813bf, "parport_read" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x45fe712c, "parport_write" },
	{ 0x6006847, "current_task" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0x71da8bd3, "parport_set_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x73a9e66e, "parport_put_port" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7cca6c66, "parport_find_number" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5220c255, "parport_claim_or_block" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x2d3e250, "parport_release" },
	{ 0xeca19776, "parport_negotiate" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "2BA05E7C2A45BC03D2B46ED");
