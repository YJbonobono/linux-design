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
	{ 0x56826ae3, "sof_io_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7e0eab9e, "intel_ipc_pcm_params" },
	{ 0xc36a372c, "snd_sof_load_firmware_memcpy" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x94f10cf7, "snd_sof_dsp_panic" },
	{ 0xcc55ef23, "snd_sof_ipc_reply" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xc2bd7629, "sof_io_read" },
	{ 0x5e5f9e1b, "intel_pcm_close" },
	{ 0x4bec402b, "intel_pcm_open" },
	{ 0x59c9b03b, "sof_fw_ready" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7da63d01, "snd_sof_ipc_msgs_rx" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf544060f, "intel_ipc_msg_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb0414f51, "sof_mailbox_read" },
	{ 0xab4a7e29, "sof_mailbox_write" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb10b9ac, "sof_io_read64" },
	{ 0x36b289b9, "snd_sof_get_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc03415f, "sof_block_write" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x16e8e976, "snd_sof_parse_module_memcpy" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5dbedd8d, "snd_sof_dsp_update_bits64_unlocked" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0x68caf64b, "snd_sof_dsp_update_bits64" },
	{ 0xaff5b027, "sof_io_write64" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x19a1274b, "sof_block_read" },
};

MODULE_INFO(depends, "snd-sof,snd-sof-intel-ipc");


MODULE_INFO(srcversion, "119D8E89B802F57E8D43112");
