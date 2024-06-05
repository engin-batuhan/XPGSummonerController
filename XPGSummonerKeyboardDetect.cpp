/*---------------------------------------------------------*\
| XPGSummonerKeyboardController.h                           |
|                                                           |
|   Driver for XPG Summoner keyboard                        |
|                                                           |
|   Engin Batuhan YAMEN (engin-batuhan)        05 June 2024 |
|                                                           |
|   This file is part of the OpenRGB project                |
|   SPDX-License-Identifier: GPL-2.0-only                   |
\*---------------------------------------------------------*/

#include "Detector.h"
//#include "AOCKeyboardController.h"
#include "RGBController.h"
//#include "RGBController_AOCKeyboard.h"

/*-----------------------------------------------------*\
| XPG Summoner Keyboard ID                              |
\*-----------------------------------------------------*/
#define XPG_SUMMONER_VID                            0x125f
#define XPG_SUMMONER_PID                            0x9418

/******************************************************************************************\
*                                                                                          *
*   DetectXPGKeyboardController                                                            *
*                                                                                          *
*       Tests the USB address to see if an AOC Keyboard controller exists there.           *
*                                                                                          *
\******************************************************************************************/

/*
void DetectAOCKeyboardControllers(hid_device_info* info, const std::string& name)
{
    hid_device* dev = hid_open_path(info->path);

    if(dev)
    {
        AOCKeyboardController*     controller     = new AOCKeyboardController(dev, info->path);
        RGBController_AOCKeyboard* rgb_controller = new RGBController_AOCKeyboard(controller);
        rgb_controller->name                      = name;

        ResourceManager::get()->RegisterRGBController(rgb_controller);
    }
}
*/

REGISTER_HID_DETECTOR_IPU ("XPG Summoner",  DetectAOCKeyboardControllers,   XPG_SUMMONER_VID,    XPG_SUMMONER_PID ,2 ,0xFF01, 0x0001);
