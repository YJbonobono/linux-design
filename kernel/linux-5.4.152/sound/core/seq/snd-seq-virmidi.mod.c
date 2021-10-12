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
	{ 0x2cf56e01, "snd_rawmidi_proceed" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x58aca9af, "snd_device_free" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5e3bf4ca, "snd_seq_create_kernel_client" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x901fe54f, "snd_rawmidi_transmit" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq-midi-event,snd-seq,snd");


MODULE_INFO(srcversion, "778E66E20BB331CEE6ADFA8");
