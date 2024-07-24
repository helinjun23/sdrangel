/*  nobII.h

This file is part of a program that implements a Software-Defined Radio.

Copyright (C) 2014 Warren Pratt, NR0V
Copyright (C) 2024 Edouard Griffiths, F4EXB Adapted to SDRangel

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

The author can be reached by email at

warren@wpratt.com

*/

#ifndef wdsp_nob_h
#define wdsp_nob_h

#include "export.h"

namespace WDSP {

class RXA;

class WDSP_API NOB
{
public:
    int run;
    int buffsize;                   // size of input/output buffer
    float* in;                     // input buffer
    float* out;                    // output buffer
    int dline_size;                 // length of delay line which is 'double dline[length][2]'
    double *dline;                  // pointer to delay line
    int *imp;
    double samplerate;              // samplerate, used to convert times into sample counts
    int mode;
    double advslewtime;                     // transition time, signal<->zero
    double advtime;                 // deadtime (zero output) in advance of detected noise
    double hangslewtime;
    double hangtime;                // time to stay at zero after noise is no longer detected
    double max_imp_seq_time;
    int filterlen;
    double *fcoefs;
    double *bfbuff;
    int bfb_in_idx;
    double *ffbuff;
    int ffb_in_idx;
    double backtau;                 // time constant used in averaging the magnitude of the input signal
    double threshold;               // triggers if (noise > threshold * average_signal_magnitude)
    double *awave;                   // pointer to array holding transition waveform
    double *hwave;
    int state;                      // state of the state machine
    double avg;                     // average value of the signal magnitude
    int time;                       // count when decreasing the signal magnitude
    int adv_slew_count;
    int adv_count;                  // number of samples to equal 'tau' time
    int hang_count;                 // number of samples to equal 'hangtime' time
    int hang_slew_count;            // number of samples to equal 'advtime' time
    int max_imp_seq;
    int blank_count;
    int in_idx;                     // ring buffer position into which new samples are inserted
    int scan_idx;
    int out_idx;                    // ring buffer position from which delayed samples are pulled
    double backmult;                // multiplier for waveform averaging
    double ombackmult;              // multiplier for waveform averaging
    double I1, Q1;
    double I2, Q2;
    double I, Q;
    double Ilast, Qlast;
    double deltaI, deltaQ;
    double Inext, Qnext;
    int overflow;

    NOB(
        int run,
        int buffsize,
        float* in,
        float* out,
        double samplerate,
        int mode,
        double advslewtime,
        double advtime,
        double hangslewtime,
        double hangtime,
        double max_imp_seq_time,
        double backtau,
        double threshold
    );
    ~NOB();
                                                                                           ////////////  legacy interface - remove
    void flush();
    void execute();
    void setBuffers(float* in, float* out);
    void setSize(int size);
    // Common interface
    void setRun (int run);
    void setMode (int mode);
    void setBuffsize (int size);
    void setSamplerate (int size);
    void setTau (double tau);
    void setHangtime (double time);
    void setAdvtime (double time);
    void setBacktau (double tau);
    void setThreshold (double thresh);

private:
    void init();
};


} // namespace

#endif
