#pragma once
#include "../../../stlspeller/speller.h"
#include "ManagedObject.h"

using namespace System;

namespace CLI {
	public ref class Speller : public ManagedObject<vabamorf::speller>
	{
	public:
		Speller(String^ lex);
		bool Spell(String^ word);
		System::Collections::Generic::List<String^>^ Suggest(String^ word);
	};
}
