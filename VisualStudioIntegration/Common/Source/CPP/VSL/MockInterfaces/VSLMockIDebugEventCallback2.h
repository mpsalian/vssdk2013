/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef IDEBUGEVENTCALLBACK2_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define IDEBUGEVENTCALLBACK2_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "msdbg.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class IDebugEventCallback2NotImpl :
	public IDebugEventCallback2
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IDebugEventCallback2NotImpl)

public:

	typedef IDebugEventCallback2 Interface;

	STDMETHOD(Event)(
		/*[in]*/ IDebugEngine2* /*pEngine*/,
		/*[in]*/ IDebugProcess2* /*pProcess*/,
		/*[in]*/ IDebugProgram2* /*pProgram*/,
		/*[in]*/ IDebugThread2* /*pThread*/,
		/*[in]*/ IDebugEvent2* /*pEvent*/,
		/*[in]*/ REFIID /*riidEvent*/,
		/*[in]*/ DWORD /*dwAttrib*/)VSL_STDMETHOD_NOTIMPL
};

class IDebugEventCallback2MockImpl :
	public IDebugEventCallback2,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IDebugEventCallback2MockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(IDebugEventCallback2MockImpl)

	typedef IDebugEventCallback2 Interface;
	struct EventValidValues
	{
		/*[in]*/ IDebugEngine2* pEngine;
		/*[in]*/ IDebugProcess2* pProcess;
		/*[in]*/ IDebugProgram2* pProgram;
		/*[in]*/ IDebugThread2* pThread;
		/*[in]*/ IDebugEvent2* pEvent;
		/*[in]*/ REFIID riidEvent;
		/*[in]*/ DWORD dwAttrib;
		HRESULT retValue;
	};

	STDMETHOD(Event)(
		/*[in]*/ IDebugEngine2* pEngine,
		/*[in]*/ IDebugProcess2* pProcess,
		/*[in]*/ IDebugProgram2* pProgram,
		/*[in]*/ IDebugThread2* pThread,
		/*[in]*/ IDebugEvent2* pEvent,
		/*[in]*/ REFIID riidEvent,
		/*[in]*/ DWORD dwAttrib)
	{
		VSL_DEFINE_MOCK_METHOD(Event)

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pEngine);

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pProcess);

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pProgram);

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pThread);

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pEvent);

		VSL_CHECK_VALIDVALUE(riidEvent);

		VSL_CHECK_VALIDVALUE(dwAttrib);

		VSL_RETURN_VALIDVALUES();
	}
};


} // namespace VSL

#pragma warning(pop)

#endif // IDEBUGEVENTCALLBACK2_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
