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
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x681c8c5f, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5287e688, "fw_iso_resources_update" },
	{ 0x34e0549f, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0x39092fdc, "fw_send_request" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf67c83aa, "snd_pcm_hw_constraint_msbits" },
	{ 0x168a4a30, "snd_info_create_card_entry" },
	{ 0xd6e86ea5, "fw_iso_resources_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc43974ee, "fw_bus_type" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x26dfa84a, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7ba2649c, "amdtp_domain_add_stream" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x915d9e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xd6dc4d1, "amdtp_stream_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1433dde6, "snd_rawmidi_transmit_peek" },
	{ 0x712a1a26, "snd_hwdep_new" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0x1d5d29c3, "fw_iso_resources_destroy" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6579389b, "snd_pcm_hw_rule_add" },
	{ 0x24b53720, "snd_rawmidi_transmit_ack" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x51eb09a5, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc171b9ec, "amdtp_stream_pcm_prepare" },
	{ 0xa4f9b8e8, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdc77dbde, "snd_pcm_set_sync" },
	{ 0xa9aa9d36, "fw_iso_resources_allocate" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8fa13509, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf782bec, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4c9c3d27, "amdtp_stream_pcm_abort" },
	{ 0xebcb0a24, "amdtp_stream_set_parameters" },
	{ 0x8d1c97a, "amdtp_stream_init" },
	{ 0x8161b147, "snd_fw_schedule_registration" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x8b7402dc, "amdtp_stream_add_pcm_hw_constraints" },
	{ 0x53ca18e8, "amdtp_rate_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x1469eedb, "snd_fw_transaction" },
	{ 0xd9f3cf7c, "fw_iso_resources_free" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x55764467, "snd_rawmidi_transmit_empty" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf494d147, "fw_send_response" },
};

MODULE_INFO(depends, "snd-firewire-lib,firewire-core,snd-pcm,snd,snd-rawmidi,snd-hwdep");

MODULE_ALIAS("ieee1394:ven00000A35mo00101800sp00000A35ver00000001*");
MODULE_ALIAS("ieee1394:ven00000A35mo00101800sp00000A35ver00000002*");
MODULE_ALIAS("ieee1394:ven00000A35mo00101800sp00000A35ver00000004*");

MODULE_INFO(srcversion, "9B16B4D669FB4CE3EA3E418");
