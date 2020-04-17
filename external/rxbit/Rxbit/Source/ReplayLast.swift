//  Copyright 2017-2020 Fitbit, Inc
//  SPDX-License-Identifier: Apache-2.0
//
//  ReplayLast.swift
//  Rxbit
//
//  Created by Sylvain Rebaud on 10/15/18.
//

import RxSwift

extension ObservableType {
	/// Returns a connected observable sequence that shares a single subscription to the underlying
	/// sequence replaying last element.
	///
	/// - Returns: A connected observable sequence that shares the last element sent by the underlying sequence.
	public func replayLast() -> Observable<Element> {
		let connectable = self.replay(1)
		_ = connectable.connect()

		return connectable.asObservable()
	}
}

extension ObservableConvertibleType {
	public func replayLast() -> Observable<Element> {
		return asObservable().replayLast()
	}
}
