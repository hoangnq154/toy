#pragma once

#if !defined MUD_MODULES || defined MUD_TYPE_LIB
#include <refl/Module.h>
#endif

#include <edit/Forward.h>
#include <edit/Types.h>

#ifndef _REFL_EXPORT
#define _REFL_EXPORT MUD_IMPORT
#endif

namespace toy
{
	export_ class _REFL_EXPORT toy_edit : public Module
	{
	private:
		toy_edit();
		
	public:
		static toy_edit& m() { static toy_edit instance; return instance; }
	};
}


extern "C"
_REFL_EXPORT Module& getModule();
#endif
