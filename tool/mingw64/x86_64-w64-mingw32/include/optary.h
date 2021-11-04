/*** Autogenerated by WIDL 6.4 from include/optary.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __optary_h__
#define __optary_h__

/* Forward declarations */

#ifndef __IOptionArray_FWD_DEFINED__
#define __IOptionArray_FWD_DEFINED__
typedef interface IOptionArray IOptionArray;
#ifdef __cplusplus
interface IOptionArray;
#endif /* __cplusplus */
#endif

#ifndef __IHtmlLoadOptions_FWD_DEFINED__
#define __IHtmlLoadOptions_FWD_DEFINED__
typedef interface IHtmlLoadOptions IHtmlLoadOptions;
#ifdef __cplusplus
interface IHtmlLoadOptions;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IOptionArray interface
 */
#ifndef __IOptionArray_INTERFACE_DEFINED__
#define __IOptionArray_INTERFACE_DEFINED__

typedef IOptionArray *LPOPTIONARRAY;
DEFINE_GUID(IID_IOptionArray, 0x22b6d492, 0x0f88, 0x11d1, 0xba,0x19, 0x00,0xc0,0x4f,0xd9,0x12,0xd0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("22b6d492-0f88-11d1-ba19-00c04fd912d0")
IOptionArray : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE QueryOption(
        DWORD dwOption,
        LPVOID pBuffer,
        ULONG *pcbBuf) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOption(
        DWORD dwOption,
        LPVOID pBuffer,
        ULONG cbBuf) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IOptionArray, 0x22b6d492, 0x0f88, 0x11d1, 0xba,0x19, 0x00,0xc0,0x4f,0xd9,0x12,0xd0)
#endif
#else
typedef struct IOptionArrayVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOptionArray *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOptionArray *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOptionArray *This);

    /*** IOptionArray methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryOption)(
        IOptionArray *This,
        DWORD dwOption,
        LPVOID pBuffer,
        ULONG *pcbBuf);

    HRESULT (STDMETHODCALLTYPE *SetOption)(
        IOptionArray *This,
        DWORD dwOption,
        LPVOID pBuffer,
        ULONG cbBuf);

    END_INTERFACE
} IOptionArrayVtbl;

interface IOptionArray {
    CONST_VTBL IOptionArrayVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IOptionArray_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IOptionArray_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IOptionArray_Release(This) (This)->lpVtbl->Release(This)
/*** IOptionArray methods ***/
#define IOptionArray_QueryOption(This,dwOption,pBuffer,pcbBuf) (This)->lpVtbl->QueryOption(This,dwOption,pBuffer,pcbBuf)
#define IOptionArray_SetOption(This,dwOption,pBuffer,cbBuf) (This)->lpVtbl->SetOption(This,dwOption,pBuffer,cbBuf)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IOptionArray_QueryInterface(IOptionArray* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IOptionArray_AddRef(IOptionArray* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IOptionArray_Release(IOptionArray* This) {
    return This->lpVtbl->Release(This);
}
/*** IOptionArray methods ***/
static FORCEINLINE HRESULT IOptionArray_QueryOption(IOptionArray* This,DWORD dwOption,LPVOID pBuffer,ULONG *pcbBuf) {
    return This->lpVtbl->QueryOption(This,dwOption,pBuffer,pcbBuf);
}
static FORCEINLINE HRESULT IOptionArray_SetOption(IOptionArray* This,DWORD dwOption,LPVOID pBuffer,ULONG cbBuf) {
    return This->lpVtbl->SetOption(This,dwOption,pBuffer,cbBuf);
}
#endif
#endif

#endif


#endif  /* __IOptionArray_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IHtmlLoadOptions interface
 */
#ifndef __IHtmlLoadOptions_INTERFACE_DEFINED__
#define __IHtmlLoadOptions_INTERFACE_DEFINED__

typedef enum __WIDL_optary_generated_name_0000000E {
    HTMLLOADOPTION_CODEPAGE = 0,
    HTMLLOADOPTION_INETSHORTCUTPATH = 1,
    HTMLLOADOPTION_HYPERLINK = 2,
    HTMLLOADOPTION_FRAMELOAD = 3
} HTMLLOADOPTION;
DEFINE_GUID(IID_IHtmlLoadOptions, 0xa71a0808, 0x0f88, 0x11d1, 0xba,0x19, 0x00,0xc0,0x4f,0xd9,0x12,0xd0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a71a0808-0f88-11d1-ba19-00c04fd912d0")
IHtmlLoadOptions : public IOptionArray
{
};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IHtmlLoadOptions, 0xa71a0808, 0x0f88, 0x11d1, 0xba,0x19, 0x00,0xc0,0x4f,0xd9,0x12,0xd0)
#endif
#else
typedef struct IHtmlLoadOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHtmlLoadOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHtmlLoadOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHtmlLoadOptions *This);

    /*** IOptionArray methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryOption)(
        IHtmlLoadOptions *This,
        DWORD dwOption,
        LPVOID pBuffer,
        ULONG *pcbBuf);

    HRESULT (STDMETHODCALLTYPE *SetOption)(
        IHtmlLoadOptions *This,
        DWORD dwOption,
        LPVOID pBuffer,
        ULONG cbBuf);

    END_INTERFACE
} IHtmlLoadOptionsVtbl;

interface IHtmlLoadOptions {
    CONST_VTBL IHtmlLoadOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IHtmlLoadOptions_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IHtmlLoadOptions_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IHtmlLoadOptions_Release(This) (This)->lpVtbl->Release(This)
/*** IOptionArray methods ***/
#define IHtmlLoadOptions_QueryOption(This,dwOption,pBuffer,pcbBuf) (This)->lpVtbl->QueryOption(This,dwOption,pBuffer,pcbBuf)
#define IHtmlLoadOptions_SetOption(This,dwOption,pBuffer,cbBuf) (This)->lpVtbl->SetOption(This,dwOption,pBuffer,cbBuf)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IHtmlLoadOptions_QueryInterface(IHtmlLoadOptions* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IHtmlLoadOptions_AddRef(IHtmlLoadOptions* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IHtmlLoadOptions_Release(IHtmlLoadOptions* This) {
    return This->lpVtbl->Release(This);
}
/*** IOptionArray methods ***/
static FORCEINLINE HRESULT IHtmlLoadOptions_QueryOption(IHtmlLoadOptions* This,DWORD dwOption,LPVOID pBuffer,ULONG *pcbBuf) {
    return This->lpVtbl->QueryOption(This,dwOption,pBuffer,pcbBuf);
}
static FORCEINLINE HRESULT IHtmlLoadOptions_SetOption(IHtmlLoadOptions* This,DWORD dwOption,LPVOID pBuffer,ULONG cbBuf) {
    return This->lpVtbl->SetOption(This,dwOption,pBuffer,cbBuf);
}
#endif
#endif

#endif


#endif  /* __IHtmlLoadOptions_INTERFACE_DEFINED__ */

DEFINE_GUID(CLSID_HTMLLoadOptions, 0x18845040, 0x0FA5, 0x11D1, 0xBA,0x19, 0x00,0xC0,0x4F,0xD9,0x12,0xD0);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __optary_h__ */