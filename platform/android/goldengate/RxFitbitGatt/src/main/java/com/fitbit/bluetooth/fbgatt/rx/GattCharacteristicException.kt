// Copyright 2017-2020 Fitbit, Inc
// SPDX-License-Identifier: Apache-2.0

package com.fitbit.bluetooth.fbgatt.rx

import java.util.UUID

/**
 * Exception indicating GATT characteristic not found
 *
 * @param uuid id of GATT characteristic that was not found
 */
class GattCharacteristicException(uuid: UUID) : Exception("GATT service characteristic with uuid: $uuid, not found")
