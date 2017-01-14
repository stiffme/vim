

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for if_ole.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: none
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __if_ole_h__
#define __if_ole_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVim_FWD_DEFINED__
#define __IVim_FWD_DEFINED__
typedef interface IVim IVim;

#endif 	/* __IVim_FWD_DEFINED__ */


#ifndef __Vim_FWD_DEFINED__
#define __Vim_FWD_DEFINED__

#ifdef __cplusplus
typedef class Vim Vim;
#else
typedef struct Vim Vim;
#endif /* __cplusplus */

#endif 	/* __Vim_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IVim_INTERFACE_DEFINED__
#define __IVim_INTERFACE_DEFINED__

/* interface IVim */
/* [oleautomation][dual][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVim;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F0BFAE2-4C90-11d1-82D7-0004AC368519")
    IVim : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SendKeys( 
            /* [in] */ BSTR keys) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Eval( 
            /* [in] */ BSTR expr,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetForeground( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHwnd( 
            /* [retval][out] */ UINT_PTR *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVimVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVim * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVim * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVim * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVim * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVim * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVim * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVim * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *SendKeys )( 
            IVim * This,
            /* [in] */ BSTR keys);
        
        HRESULT ( STDMETHODCALLTYPE *Eval )( 
            IVim * This,
            /* [in] */ BSTR expr,
            /* [retval][out] */ BSTR *result);
        
        HRESULT ( STDMETHODCALLTYPE *SetForeground )( 
            IVim * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHwnd )( 
            IVim * This,
            /* [retval][out] */ UINT_PTR *result);
        
        END_INTERFACE
    } IVimVtbl;

    interface IVim
    {
        CONST_VTBL struct IVimVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVim_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVim_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVim_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVim_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVim_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVim_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVim_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVim_SendKeys(This,keys)	\
    ( (This)->lpVtbl -> SendKeys(This,keys) ) 

#define IVim_Eval(This,expr,result)	\
    ( (This)->lpVtbl -> Eval(This,expr,result) ) 

#define IVim_SetForeground(This)	\
    ( (This)->lpVtbl -> SetForeground(This) ) 

#define IVim_GetHwnd(This,result)	\
    ( (This)->lpVtbl -> GetHwnd(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVim_INTERFACE_DEFINED__ */



#ifndef __Vim_LIBRARY_DEFINED__
#define __Vim_LIBRARY_DEFINED__

/* library Vim */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_Vim;

EXTERN_C const CLSID CLSID_Vim;

#ifdef __cplusplus

class DECLSPEC_UUID("0F0BFAE1-4C90-11d1-82D7-0004AC368519")
Vim;
#endif
#endif /* __Vim_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


