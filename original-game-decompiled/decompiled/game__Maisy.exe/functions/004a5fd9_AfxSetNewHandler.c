
/* ==== AfxSetNewHandler @ 004a5fd9 ==== 
 * signature: _func_int_uint * __stdcall AfxSetNewHandler(_func_int_uint * param_1)
 * body: 004a5fd9-004a5fec
 * note: Library Function - Single Match  int (__cdecl*__stdcall AfxSetNewHandler(int (__cdecl*)(unsigned int)))(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int (__cdecl*__stdcall AfxSetNewHandler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 1998 Release */

_func_int_uint * AfxSetNewHandler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pAVar2 = AfxGetModuleThreadState();
  p_Var1 = *(_func_int_uint **)(pAVar2 + 0x28);
  *(_func_int_uint **)(pAVar2 + 0x28) = param_1;
  return p_Var1;
}


