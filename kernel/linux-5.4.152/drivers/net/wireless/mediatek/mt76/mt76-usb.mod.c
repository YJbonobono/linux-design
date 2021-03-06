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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x9eac8aa1, "skb_to_sgvec" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x5bafa8fd, "usb_init_urb" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe178ca7c, "mt76_rx_poll_complete" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x181f4f1a, "__page_frag_cache_drain" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8d252fac, "usb_unpoison_urb" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x28acfc69, "usb_poison_urb" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x466e1228, "build_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdd647c35, "mt76_txq_schedule" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xeb1a64a4, "mt76_tx_status_check" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4a8184b, "ieee80211_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x8d831d24, "mt76_has_tx_pending" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x211fdf55, "usb_free_urb" },
};

MODULE_INFO(depends, "mt76,mac80211");


MODULE_INFO(srcversion, "68D84A5FBE63663A7F17527");
