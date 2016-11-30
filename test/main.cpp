#include <iostream>
#include "webrtc/common_audio/vad/include/webrtc_vad.h"
#include "webrtc/common_audio/wav_file.h"
#include <cmath>
#include <limits>

int main( int argc, char **argv)
{
        /*
        VadInst *vad = WebRtcVad_Create();
        WebRtcVad_Init(vad);
        WebRtcVad_set_mode( vad, 3);
        int is_voiced = WebRtcVad_Process(vad, 8000, 0, 160);
	std::cout << "is_voiced == " << is_voiced << std::endl;
        */
        
        std::string outfile = "/tmp/wavtest3.wav";
        static const int kSampleRate = 8000;
        static const int kNumChannels = 1;
        static const uint32_t kNumSamples = 3 * kSampleRate * kNumChannels;
        float samples[kNumSamples];
        for (uint32_t i = 0; i < kNumSamples; i += kNumChannels) 
        {
            // A nice periodic beeping sound.
            static const double kToneHz = 440;
            const double t = static_cast<double>(i) / (kNumChannels * kSampleRate);
            const double x =
                std::numeric_limits<int16_t>::max() * std::sin(t * kToneHz * 2 * M_PI);
            samples[i] = std::pow(std::sin(t * 2 * 2 * M_PI), 10) * x;
            samples[i + 1] = std::pow(std::cos(t * 2 * 2 * M_PI), 10) * x;
        }
        webrtc::WavWriter w(outfile, kSampleRate, kNumChannels);
        w.WriteSamples(samples, kNumSamples);
}
