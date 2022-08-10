#include "vcclr.h"
#include "Speller.h"

using namespace std;
using namespace System::Runtime::InteropServices;

namespace CLI
{
	Speller::Speller(String^ lex) : ManagedObject(new vabamorf::speller(string_to_wstring(lex)))
	{
	}

	bool Speller::Spell(String^ word)
	{
		return m_Instance->spell(string_to_wstring(word));
	}

	System::Collections::Generic::List<String^>^ Speller::Suggest(String^ word)
	{
		vector<wstring> suggestions = m_Instance->suggest(string_to_wstring(word));
		System::Collections::Generic::List<String^>^ list = gcnew System::Collections::Generic::List<String^>();
		for (size_t i = 0; i < suggestions.size(); i++)
		{
			String^ str = gcnew String(suggestions[0].data());
			list->Add(str);
		}
		return list;
	}
}