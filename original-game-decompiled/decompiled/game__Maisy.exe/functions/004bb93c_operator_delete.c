
/* ==== CNoTrackObject::operator_delete @ 004bb93c ==== 
 * signature: void __stdcall operator_delete(void * param_1)
 * body: 004bb93c-004bb94d
 * note: Library Function - Single Match  public: static void __stdcall CNoTrackObject::operator delete(void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CNoTrackObject::operator delete(void *)
   
   Library: Visual Studio 1998 Release */

void CNoTrackObject::operator_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
    LocalFree(param_1);
  }
  return;
}


