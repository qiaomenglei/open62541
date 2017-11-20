/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TESTING_NETWORKLAYERS_H_
#define TESTING_NETWORKLAYERS_H_

#include "ua_server_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Create the TCP networklayer and listen to the specified port
 *
 * @param verificationBuffer the send function will write the data that is sent to this buffer, so that it is
 *                           possible to check what the send function recieved.
 */
UA_Connection createDummyConnection(UA_ByteString *verificationBuffer);

#ifdef __cplusplus
}
#endif

#endif /* TESTING_NETWORKLAYERS_H_ */