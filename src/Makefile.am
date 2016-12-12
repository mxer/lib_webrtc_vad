lib_LTLIBRARIES = libwebrtcvad.la
libwebrtcvad_la_CPPFLAGS = -DWEBRTC_POSIX
libwebrtcvad_la_SOURCES = \
	webrtc/common_audio/vad/vad_core.c						\
	webrtc/common_audio/vad/vad_gmm.c						\
	webrtc/common_audio/vad/webrtc_vad.c						\
	webrtc/common_audio/vad/vad.cc							\
	webrtc/common_audio/vad/vad_filterbank.c					\
	webrtc/common_audio/vad/vad_sp.c						\
											\
	webrtc/base/checks.cc								\
											\
	webrtc/common_audio/signal_processing/resample_48khz.c				\
	webrtc/common_audio/signal_processing/resample_fractional.c			\
	webrtc/common_audio/signal_processing/energy.c					\
	webrtc/common_audio/signal_processing/resample_by_2_internal.c			\
	webrtc/common_audio/signal_processing/division_operations.c			\
	webrtc/common_audio/signal_processing/spl_init.c				\
	webrtc/common_audio/signal_processing/min_max_operations.c			\
	webrtc/common_audio/signal_processing/cross_correlation.c			\
	webrtc/common_audio/signal_processing/vector_scaling_operations.c		\
	webrtc/common_audio/signal_processing/downsample_fast.c				\
	webrtc/common_audio/signal_processing/get_scaling_square.c
	
	
nobase_include_HEADERS = \
	webrtc/common_audio/vad/include/vad.h						\
	webrtc/common_audio/vad/include/webrtc_vad.h					\
	webrtc/common_audio/vad/vad_filterbank.h					\
	webrtc/common_audio/vad/vad_sp.h						\
	webrtc/common_audio/vad/vad_core.h						\
	webrtc/common_audio/vad/vad_gmm.h						\
											\
	webrtc/base/checks.h								\
	webrtc/base/sanitizer.h								\
	webrtc/base/logging.h								\
	webrtc/base/basictypes.h							\
	webrtc/base/constructormagic.h							\
	webrtc/base/thread_annotations.h						\
											\
	webrtc/common_audio/signal_processing/include/signal_processing_library.h	\
	webrtc/common_audio/signal_processing/include/spl_inl.h				\
	webrtc/common_audio/signal_processing/resample_by_2_internal.h			\
											\
	webrtc/system_wrappers/include/compile_assert_c.h				\
	webrtc/system_wrappers/include/cpu_features_wrapper.h				\
											\
	webrtc/typedefs.h