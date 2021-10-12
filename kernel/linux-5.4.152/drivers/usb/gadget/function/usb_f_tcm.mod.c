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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x29d3abe4, "usb_ep_autoconfig_ss" },
	{ 0xac86cd23, "usb_gstrings_attach" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xd25e864c, "usb_free_all_descriptors" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0x754d539c, "strlen" },
	{ 0xc2258b94, "core_tpg_register" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x3f03166b, "configfs_undepend_item" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xcf56df01, "target_register_template" },
	{ 0x5b93520e, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x49eafa1f, "target_submit_cmd" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x531c923b, "usb_function_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x933a8461, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x11a6c0c9, "target_remove_session" },
	{ 0x9b9e4645, "usb_function_register" },
	{ 0x37e705ce, "usb_composite_setup_continue" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x96a20d74, "target_setup_session" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xef1135da, "transport_send_check_condition_and_sense" },
	{ 0xf801e691, "target_unregister_template" },
	{ 0x326a25d2, "transport_init_se_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a880b04, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x5586c3ab, "configfs_depend_item_unlocked" },
	{ 0xf53738b, "usb_assign_descriptors" },
	{ 0x4981fa7b, "usb_interface_id" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "libcomposite,udc-core,target_core_mod");


MODULE_INFO(srcversion, "FF3BB1CD4415837352DECC8");
