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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x681c8c5f, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5287e688, "fw_iso_resources_update" },
	{ 0x34e0549f, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x168a4a30, "snd_info_create_card_entry" },
	{ 0xd6e86ea5, "fw_iso_resources_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc43974ee, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfa351414, "amdtp_am824_set_pcm_position" },
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
	{ 0x712a1a26, "snd_hwdep_new" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0x1d5d29c3, "fw_iso_resources_destroy" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6579389b, "snd_pcm_hw_rule_add" },
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
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
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
	{ 0x8161b147, "snd_fw_schedule_registration" },
	{ 0x63ab815e, "amdtp_am824_add_pcm_hw_constraints" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xcb37e36, "amdtp_am824_init" },
	{ 0xcb9d68ec, "snd_pcm_limit_hw_rates" },
	{ 0x8f5146ab, "amdtp_am824_midi_trigger" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x1469eedb, "snd_fw_transaction" },
	{ 0x21895694, "amdtp_am824_set_parameters" },
	{ 0xd9f3cf7c, "fw_iso_resources_free" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf494d147, "fw_send_response" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd,snd-rawmidi,snd-pcm,snd-hwdep");

MODULE_ALIAS("ieee1394:ven00000D6Cmo00000010sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00000011sp*ver*");
MODULE_ALIAS("ieee1394:ven00000166mo00000020sp*ver*");
MODULE_ALIAS("ieee1394:ven00000166mo00000021sp*ver*");
MODULE_ALIAS("ieee1394:ven00000166mo00000022sp*ver*");
MODULE_ALIAS("ieee1394:ven00000166mo00000023sp*ver*");
MODULE_ALIAS("ieee1394:ven00000166mo00000024sp*ver*");
MODULE_ALIAS("ieee1394:ven00000166mo00000027sp*ver*");
MODULE_ALIAS("ieee1394:ven00000166mo00000030sp*ver*");
MODULE_ALIAS("ieee1394:ven00000595mo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven00001EE8mo00000002sp*ver*");
MODULE_ALIAS("ieee1394:ven000050C2mo00000070sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00000008sp*ver*");
MODULE_ALIAS("ieee1394:ven*mo*sp*ver00000001*");

MODULE_INFO(srcversion, "EC1C0D58E14785332A3FA51");
