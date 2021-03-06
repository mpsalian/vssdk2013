/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef IVSIMMEDIATESTATEMENTCOMPLETION_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define IVSIMMEDIATESTATEMENTCOMPLETION_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "completion.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class IVsImmediateStatementCompletionNotImpl :
	public IVsImmediateStatementCompletion
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IVsImmediateStatementCompletionNotImpl)

public:

	typedef IVsImmediateStatementCompletion Interface;

	STDMETHOD(InstallStatementCompletion)(
		/*[in]*/ BOOL /*fInstall*/,
		/*[in]*/ IVsTextView* /*pCmdWinView*/,
		/*[in]*/ BOOL /*fInitialEnable*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(EnableStatementCompletion_Deprecated)(
		/*[in]*/ BOOL /*fEnable*/,
		/*[in]*/ CharIndex /*iStartIndex*/,
		/*[in]*/ CharIndex /*iEndIndex*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(SetCompletionContext_Deprecated)(
		/*[in]*/ LPCOLESTR /*pszFilePath*/,
		/*[in]*/ IVsTextLines* /*pBuffer*/,
		/*[in]*/ const TextSpan* /*ptsCurStatement*/,
		/*[in]*/ IUnknown* /*punkContext*/)VSL_STDMETHOD_NOTIMPL
};

class IVsImmediateStatementCompletionMockImpl :
	public IVsImmediateStatementCompletion,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IVsImmediateStatementCompletionMockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(IVsImmediateStatementCompletionMockImpl)

	typedef IVsImmediateStatementCompletion Interface;
	struct InstallStatementCompletionValidValues
	{
		/*[in]*/ BOOL fInstall;
		/*[in]*/ IVsTextView* pCmdWinView;
		/*[in]*/ BOOL fInitialEnable;
		HRESULT retValue;
	};

	STDMETHOD(InstallStatementCompletion)(
		/*[in]*/ BOOL fInstall,
		/*[in]*/ IVsTextView* pCmdWinView,
		/*[in]*/ BOOL fInitialEnable)
	{
		VSL_DEFINE_MOCK_METHOD(InstallStatementCompletion)

		VSL_CHECK_VALIDVALUE(fInstall);

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pCmdWinView);

		VSL_CHECK_VALIDVALUE(fInitialEnable);

		VSL_RETURN_VALIDVALUES();
	}
	struct EnableStatementCompletion_DeprecatedValidValues
	{
		/*[in]*/ BOOL fEnable;
		/*[in]*/ CharIndex iStartIndex;
		/*[in]*/ CharIndex iEndIndex;
		HRESULT retValue;
	};

	STDMETHOD(EnableStatementCompletion_Deprecated)(
		/*[in]*/ BOOL fEnable,
		/*[in]*/ CharIndex iStartIndex,
		/*[in]*/ CharIndex iEndIndex)
	{
		VSL_DEFINE_MOCK_METHOD(EnableStatementCompletion_Deprecated)

		VSL_CHECK_VALIDVALUE(fEnable);

		VSL_CHECK_VALIDVALUE(iStartIndex);

		VSL_CHECK_VALIDVALUE(iEndIndex);

		VSL_RETURN_VALIDVALUES();
	}
	struct SetCompletionContext_DeprecatedValidValues
	{
		/*[in]*/ LPCOLESTR pszFilePath;
		/*[in]*/ IVsTextLines* pBuffer;
		/*[in]*/ TextSpan* ptsCurStatement;
		/*[in]*/ IUnknown* punkContext;
		HRESULT retValue;
	};

	STDMETHOD(SetCompletionContext_Deprecated)(
		/*[in]*/ LPCOLESTR pszFilePath,
		/*[in]*/ IVsTextLines* pBuffer,
		/*[in]*/ const TextSpan* ptsCurStatement,
		/*[in]*/ IUnknown* punkContext)
	{
		VSL_DEFINE_MOCK_METHOD(SetCompletionContext_Deprecated)

		VSL_CHECK_VALIDVALUE_STRINGW(pszFilePath);

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pBuffer);

		VSL_CHECK_VALIDVALUE_POINTER(ptsCurStatement);

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(punkContext);

		VSL_RETURN_VALIDVALUES();
	}
};


} // namespace VSL

#pragma warning(pop)

#endif // IVSIMMEDIATESTATEMENTCOMPLETION_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
