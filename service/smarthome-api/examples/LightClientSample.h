/* ****************************************************************
 *
 * Copyright 2017 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/
#ifndef SMARTHOME_API_EXAMPLES_LIGHTCLIENTSAMPLE_H_
#define SMARTHOME_API_EXAMPLES_LIGHTCLIENTSAMPLE_H_

#include <iostream>
#include <list>

#include <CommonApi.h>
#include <RemoteLightDevice.h>
#include <DeviceDiscovery.h>

using namespace OIC::Service::SH;
class MyRemoteBinarySwitchDelegate: public RemoteBinarySwitchResourceDelegate
{
public:
    virtual ~MyRemoteBinarySwitchDelegate() {};
private:
    void onTurnOn(ResultCode ret);
    void onTurnOff(ResultCode ret);
    void onGetState(bool value, ResultCode ret);
};

class LightClientSample: public DeviceDiscoveryDelegate
{
public:
    void start();
    void findAnyDevice();
    void findLight();
    void turnOn();
    void turnOff();
    void getState();

public:
    LightClientSample();
    virtual ~LightClientSample();

private:
    void onFindRemoteDevice(SHBaseRemoteDevice *remoteDevice);
    void onFindRemoteDevice(std::list< SHBaseRemoteDevice* > remoteDevice);

private:
    DeviceDiscovery deviceDiscovery;
    MyRemoteBinarySwitchDelegate m_delegate;
    RemoteLightDevice *m_light;
};

#endif /* SMARTHOME_API_EXAMPLES_LIGHTCLIENTSAMPLE_H_ */