// Copyright 2017-2020 Fitbit, Inc
// SPDX-License-Identifier: Apache-2.0

package com.fitbit.bluetooth.fbgatt.rx.client

import java.util.concurrent.Semaphore

/**
 * A lock to synchronize remote GATT Characteristic value change until the read/write transaction is complete
 */
internal object ReadWriteCharacteristicLock {

    val lock = Semaphore(1)

}
