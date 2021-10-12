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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x555ab32b, "ieee80211_restart_hw" },
	{ 0xd1735b40, "ieee80211_start_tx_ba_session" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x6a4e3f81, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9cefe590, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xb03d07e3, "ieee80211_stop_tx_ba_session" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0xa518601e, "ieee80211_find_sta" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x960f319c, "ieee80211_rx_irqsafe" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xda37c25d, "ieee80211_find_sta_by_ifaddr" },
	{ 0x9b553753, "skb_pull" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6006847, "current_task" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x11d771a, "ieee80211_queue_work" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x29361773, "complete" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0x9601035f, "request_firmware" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0x581cf443, "skb_push" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("pci:v000011ABd00002A0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B36sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "72F29F5D811BA5C576FD8BD");
