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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x3cab7375, "ib_register_mad_agent" },
	{ 0xf9575308, "stream_open" },
	{ 0xbf22a37d, "ib_free_recv_mad" },
	{ 0xfd205417, "no_llseek" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0xd736b90d, "ib_get_rmpp_segment" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa99f49b7, "ib_free_send_mad" },
	{ 0x7869d9a8, "rdma_destroy_ah_user" },
	{ 0x78cea809, "rdma_create_user_ah" },
	{ 0x613b1e2e, "ib_is_mad_class_rmpp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x6006847, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x7a108d1b, "ib_mad_kernel_rmpp_agent" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x94567929, "__class_register" },
	{ 0x638148e0, "ib_set_client_data" },
	{ 0xfeb29b9a, "rdma_destroy_ah_attr" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb67ecb17, "ib_create_send_mad" },
	{ 0x8423fbea, "ib_post_send_mad" },
	{ 0x4e155af0, "ib_response_mad" },
	{ 0x8e23dedf, "ib_unregister_mad_agent" },
	{ 0x300b2c5d, "ib_register_client" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x66c5171f, "cdev_device_add" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedbedbf5, "ib_init_ah_attr_from_wc" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xff661bde, "rdma_dev_access_netns" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd505b3ee, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cc5ecb4, "cdev_device_del" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x787ccc4c, "ib_get_mad_data_offset" },
	{ 0x492452ad, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "90BD93ABF70F475439E0482");
