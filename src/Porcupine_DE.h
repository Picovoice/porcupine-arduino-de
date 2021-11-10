/*
    Copyright 2021 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PORCUPINE_DE_H
#define PORCUPINE_DE_H

#include <stdint.h>

#include "Arduino.h"
#include "LibPrintf.h"

#include "pv_porcupine.h"
#include "utility/pv_audio_rec.h"

const uint8_t *pv_get_uuid(void);
uint32_t pv_get_uuid_size(void);

#endif // PORCUPINE_DE_H