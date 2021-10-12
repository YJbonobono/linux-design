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
	{ 0x4ffd164c, "vb2_core_streamoff" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x5e1fdc13, "vb2_core_dqbuf" },
	{ 0x38b78979, "vb2_mmap" },
	{ 0xc65589a6, "vb2_core_qbuf" },
	{ 0xd9dbd0e4, "vb2_core_querybuf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5e21ba49, "vb2_core_streamon" },
	{ 0x3ccb5d0, "vb2_core_poll" },
	{ 0x3bc7e226, "vb2_read" },
	{ 0xf9d9d984, "vb2_core_prepare_buf" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x746c37c8, "v4l2_event_pending" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0x6c54d296, "media_request_put" },
	{ 0x92f55192, "vb2_core_queue_release" },
	{ 0xdd04603b, "vb2_request_buffer_cnt" },
	{ 0xd5c175f, "vb2_write" },
	{ 0xc3eda37a, "media_request_get_by_fd" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedf0d17c, "vb2_core_create_bufs" },
	{ 0x6597fd2c, "vb2_core_expbuf" },
	{ 0x506532d8, "vb2_core_reqbufs" },
	{ 0x613f4c2f, "vb2_verify_memory_type" },
	{ 0x5967979f, "vb2_core_queue_init" },
	{ 0x8516ef42, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "6F55CEED13FD6AAE293F89C");
