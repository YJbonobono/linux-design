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
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xe8ca9fc9, "rmi_driver_resume" },
	{ 0xbe66444d, "hid_hw_close" },
	{ 0x6626afca, "down" },
	{ 0x8f4b91b8, "rmi_register_transport_device" },
	{ 0xcf2a6966, "up" },
	{ 0x62e68a9e, "hid_hw_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xc798376d, "rmi_set_attn_data" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xd82577e1, "__irq_domain_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x270ac3e, "irq_set_chip_and_handler_name" },
	{ 0x927278d2, "dummy_irq_chip" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3236af78, "rmi_unregister_transport_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf8c679e2, "input_event" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9b2def, "rmi_driver_suspend" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,rmi_core");

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b0003g*v000006CBp000081A7");
MODULE_ALIAS("hid:b*g0100v*p*");

MODULE_INFO(srcversion, "618855D4465BF6EE964C9A4");
