//******************************************************************
//
// Copyright 2015 Samsung Electronics All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
package org.iotivity.service.easysetup.core;

public class BleConnection implements OnBoardingConnection {

    private boolean mIsConnected;
    private String mServiceUUID;
    private String macaddress;
    private String mDeviceName;

    public void setConnectivity(boolean connected) {
        mIsConnected = connected;
    }

    public void setmServiceUUID(String uuid) {
        mServiceUUID = uuid;
    }

    public String getmServiceUUID() {
        return mServiceUUID;
    }

    public void setMacaddress(String address) {
        macaddress = address;
    }

    public String getMacaddress() {
        return macaddress;
    }

    @Override
    public String getDesc() {
        return "Description";
    }

    @Override
    public boolean isConnected() {
        return mIsConnected;
    }

    @Override
    public Object getConnection() {
        return this;
    }

    public String getmDeviceName() {
        return mDeviceName;
    }

    public void setmDeviceName(String mDeviceName) {
        this.mDeviceName = mDeviceName;
    }
}
