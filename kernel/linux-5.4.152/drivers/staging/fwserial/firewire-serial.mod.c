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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x39092fdc, "fw_send_request" },
	{ 0xa3b53740, "single_release" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc43974ee, "fw_bus_type" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x22532352, "tty_buffer_space_avail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x61991828, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0xc5850110, "printk" },
	{ 0x13bad2cc, "tty_port_register_device" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1208a414, "seq_putc" },
	{ 0x521ce967, "tty_port_init" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55c78188, "tty_buffer_set_limit" },
	{ 0xe220f939, "tty_vhangup" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf96cabf, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4f9b8e8, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfd5ae162, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xf782bec, "fw_core_remove_address_handler" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe1c05272, "tty_wakeup" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0xa900f343, "fw_run_transaction" },
	{ 0xf494d147, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp00D00D1Ever0000E81C*");

MODULE_INFO(srcversion, "125D9FAA1A97BB1AD2BC602");
