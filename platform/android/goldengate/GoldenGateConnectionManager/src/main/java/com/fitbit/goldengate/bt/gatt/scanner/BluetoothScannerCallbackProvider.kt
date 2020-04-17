// Copyright 2017-2020 Fitbit, Inc
// SPDX-License-Identifier: Apache-2.0

package com.fitbit.goldengate.bt.gatt.scanner

import com.fitbit.bluetooth.fbgatt.GattConnection
import io.reactivex.ObservableEmitter

open class BluetoothScannerCallbackProvider:(ObservableEmitter<GattConnection>) -> BluetoothScannerCallback {
    override fun invoke(e: ObservableEmitter<GattConnection>): BluetoothScannerCallback = BluetoothScannerCallback(e)
}
