package com.fitbit.goldengate.bindings.coap.data

/**
 * Implementations of this interface will be sent back to the CoAP Client in response to requests coming in to a CoAP Server
 */
interface OutgoingResponse : OutgoingMessage, BaseResponse
