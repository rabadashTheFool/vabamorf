#pragma once

using namespace System;
using namespace std;

namespace CLI {
	template<class T>
	public ref class ManagedObject
	{
	protected:
		T* m_Instance;
	public:
		ManagedObject(T* instance) : m_Instance(instance)
		{
		}

		virtual ~ManagedObject()
		{
			if (m_Instance != nullptr)
			{
				delete m_Instance;
			}
		}
		T* GetInstance()
		{
			return m_Instance;
		}

		static const wstring string_to_wstring(String^ string)
		{
			pin_ptr<const wchar_t> wch = PtrToStringChars(string);
			return wch;
		}
	};
}