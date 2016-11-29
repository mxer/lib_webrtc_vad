#include <iostream>
#include "webrtc/common_audio/vad/include/webrtc_vad.h"

int main( int argc, char **argv)
{
        VadInst *vad = WebRtcVad_Create();
        WebRtcVad_Init(vad);
        WebRtcVad_set_mode( vad, 3);
        int is_voiced = WebRtcVad_Process(vad, 8000, 0, 160);
	std::cout << "is_voiced == " << is_voiced << std::endl;
}
