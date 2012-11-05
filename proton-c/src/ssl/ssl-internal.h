#ifndef PROTON_SSL_INTERNAL_H
#define PROTON_SSL_INTERNAL_H 1
/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

#include <proton/driver.h>

/** @file
 * Internal API for SSL/TLS support in the Driver Layer.
 *
 * Generic API to abstract the implementation of SSL/TLS from the Driver codebase.
 *
 */

// release the SSL context
void pn_ssl_free( pn_ssl_t *ssl);

// move data received from the network into the SSL layer
ssize_t pn_ssl_input(pn_ssl_t *ssl, const char *bytes, size_t available);

// copy data generated by SSL into the network's output buffers
ssize_t pn_ssl_output(pn_ssl_t *ssl, char *buffer, size_t max_size);


void pn_ssl_trace(pn_ssl_t *ssl, pn_trace_t trace);

#endif /* ssl-internal.h */
