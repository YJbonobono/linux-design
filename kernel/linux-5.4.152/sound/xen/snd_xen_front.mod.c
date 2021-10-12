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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x35fbc2ec, "xenbus_frontend_closed" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x4b931968, "xen_features" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0x16f15139, "bind_evtchn_to_irq" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0xc7c23ff0, "xenbus_exists" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x55131c2a, "xenbus_free_evtchn" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x800281b6, "xen_front_pgdir_shbuf_unmap" },
	{ 0xc8c04f7c, "xenbus_unregister_driver" },
	{ 0x9166fada, "strncpy" },
	{ 0xfcf2d63f, "xen_front_pgdir_shbuf_alloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x25654cac, "__xenbus_register_frontend" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3a507339, "xenbus_alloc_evtchn" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0x6579389b, "snd_pcm_hw_rule_add" },
	{ 0xb90d9ec0, "xen_front_pgdir_shbuf_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3ffae41e, "xenbus_grant_ring" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xa803cda9, "xenbus_switch_state" },
	{ 0x45880819, "xen_front_pgdir_shbuf_map" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x8d090ba7, "xen_front_pgdir_shbuf_get_dir_start" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x729c00d0, "xenbus_dev_fatal" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "snd-pcm,xen-front-pgdir-shbuf,snd");


MODULE_INFO(srcversion, "E4B8D6F6EC24EC118B3E98A");
