/*
 * Copyright (C) 2011 The Android Open Source Project
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
 */

#ifndef ANDROID_SF_DDM_CONNECTION
#define ANDROID_SF_DDM_CONNECTION

namespace android {

// wrapper for dlsym
extern "C" void DdmConnection_start(const char* name);

class DdmConnection {
public:
    // Creates a JVM and registers all handlers to DDMS.
    // This allows tools relying on DDMS to find surfaceflinger
    // (e.g: Memory Leak finder, heap analyzer, ...)
    static void start(const char* name);
};

}; // namespace android

#endif /* ANDROID_SF_DDM_CONNECTION */
