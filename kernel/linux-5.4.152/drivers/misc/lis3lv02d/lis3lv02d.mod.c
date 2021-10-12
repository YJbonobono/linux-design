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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x6c64287b, "input_unregister_polled_device" },
	{ 0x52dd0c09, "param_get_int" },
	{ 0xfb8f27d1, "pm_runtime_barrier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xfd205417, "no_llseek" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x58af3961, "param_set_int" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xf8c679e2, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf23af466, "input_free_polled_device" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x600f472a, "pm_schedule_suspend" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x636964f5, "input_allocate_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0x93082893, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "input-polldev");


MODULE_INFO(srcversion, "EA6729DACCA5CFDFE8F4CDB");
