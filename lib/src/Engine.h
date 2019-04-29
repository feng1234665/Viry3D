/*
* Viry3D
* Copyright 2014-2019 by Stack - stackos@qq.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include <stdint.h>

namespace Viry3D
{
	class EnginePrivate;

    class Engine
    {
	public:
		static Engine* Create(void* native_window, uint64_t flags = 0, void* shared_gl_context = nullptr);
		static void Destroy(Engine** engine);
		void Execute();

	private:
		Engine(void* native_window, uint64_t flags, void* shared_gl_context);
		~Engine();

	private:
		EnginePrivate* m_private;
    };
}
