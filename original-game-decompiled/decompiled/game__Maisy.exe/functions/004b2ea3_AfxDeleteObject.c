
/* ==== AfxDeleteObject @ 004b2ea3 ==== 
 * signature: void __stdcall AfxDeleteObject(void * * param_1)
 * body: 004b2ea3-004b2ebe
 * note: Library Function - Single Match  void __stdcall AfxDeleteObject(void * *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxDeleteObject(void * *)
   
   Library: Visual Studio 1998 Release */

void AfxDeleteObject(void **param_1)

{
  if (*param_1 != (HGDIOBJ)0x0) {
    DeleteObject(*param_1);
    *param_1 = (void *)0x0;
  }
  return;
}


