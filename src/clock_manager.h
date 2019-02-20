/*
 * --------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <p-sam@d3vs.net>, <natinusala@gmail.com>, <m4x@m4xw.net>
 * wrote this file. As long as you retain this notice you can do whatever you
 * want with this stuff. If you meet any of us some day, and you think this
 * stuff is worth it, you can buy us a beer in return.  - The sys-clk authors
 * --------------------------------------------------------------------------
 */

#pragma once
#include "config.h"
#include "clocks.h"

class ClockManager
{
  public:
    ClockManager();
    virtual ~ClockManager();

    void Tick();

  protected:
    bool RefreshContext();

    Config *config;
    ClockProfile profile;
    std::uint64_t applicationTid;
    std::uint32_t *freqs;
    ChargerType chargerType;
};
