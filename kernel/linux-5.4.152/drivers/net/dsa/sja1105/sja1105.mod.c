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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2292b333, "spi_setup" },
	{ 0x9c8666cd, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xef5ef19c, "dsa_unregister_switch" },
	{ 0x5792f848, "strlcpy" },
	{ 0x59a2f0ee, "packing" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbe824665, "skb_complete_tx_timestamp" },
	{ 0x67bc4c9e, "ptp_clock_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfd0a71cd, "taprio_offload_get" },
	{ 0x6f3517ff, "dsa_switch_alloc" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x21ee5d21, "taprio_offload_free" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x37a0cba, "kfree" },
	{ 0xd85045e2, "dsa_register_switch" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ecf36a1, "ptp_clock_index" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xd75f2f52, "dsa_enqueue_skb" },
	{ 0x1dbc0fda, "dsa_port_setup_8021q_tagging" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "dsa_core,sch_taprio,tag_8021q");

MODULE_ALIAS("of:N*T*Cnxp,sja1105e");
MODULE_ALIAS("of:N*T*Cnxp,sja1105eC*");
MODULE_ALIAS("of:N*T*Cnxp,sja1105t");
MODULE_ALIAS("of:N*T*Cnxp,sja1105tC*");
MODULE_ALIAS("of:N*T*Cnxp,sja1105p");
MODULE_ALIAS("of:N*T*Cnxp,sja1105pC*");
MODULE_ALIAS("of:N*T*Cnxp,sja1105q");
MODULE_ALIAS("of:N*T*Cnxp,sja1105qC*");
MODULE_ALIAS("of:N*T*Cnxp,sja1105r");
MODULE_ALIAS("of:N*T*Cnxp,sja1105rC*");
MODULE_ALIAS("of:N*T*Cnxp,sja1105s");
MODULE_ALIAS("of:N*T*Cnxp,sja1105sC*");

MODULE_INFO(srcversion, "8943CA5F87AD0C2B88CBB27");
