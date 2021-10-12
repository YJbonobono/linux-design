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
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x681c8c5f, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34e0549f, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x168a4a30, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc43974ee, "fw_bus_type" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x4eeeb370, "cmp_connection_destroy" },
	{ 0xfb578fc5, "memset" },
	{ 0x26dfa84a, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x41ef285b, "cmp_connection_establish" },
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
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8fa13509, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf782bec, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x4c9c3d27, "amdtp_stream_pcm_abort" },
	{ 0xb5899cf, "cmp_connection_break" },
	{ 0x14eb9a79, "cmp_connection_init" },
	{ 0x8161b147, "snd_fw_schedule_registration" },
	{ 0x63ab815e, "amdtp_am824_add_pcm_hw_constraints" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xcb37e36, "amdtp_am824_init" },
	{ 0xa06a9708, "cmp_connection_release" },
	{ 0xcb9d68ec, "snd_pcm_limit_hw_rates" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x8f5146ab, "amdtp_am824_midi_trigger" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x4dcb0bbf, "cmp_connection_check_used" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x1469eedb, "snd_fw_transaction" },
	{ 0x21895694, "amdtp_am824_set_parameters" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x580a8549, "cmp_connection_reserve" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf494d147, "fw_send_response" },
};

MODULE_INFO(depends, "snd-firewire-lib,snd,firewire-core,snd-rawmidi,snd-pcm,snd-hwdep");

MODULE_ALIAS("ieee1394:ven00000FF2mo0000400Fsp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo0001200Fsp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF8sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo0000AF12sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000AF12Dsp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000AF12Asp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF2sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF4sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF9sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000000F8sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo0000AFD1sp*ver*");
MODULE_ALIAS("ieee1394:ven0000075Bmo0000AFB2sp*ver*");
MODULE_ALIAS("ieee1394:ven0000075Bmo0000AFB9sp*ver*");

MODULE_INFO(srcversion, "F2BE78704CD77ECBF546499");
