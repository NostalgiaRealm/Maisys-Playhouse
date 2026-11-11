
/* ==== CNoTrackObject::operator_new @ 004bb91e ==== 
 * signature: void * __stdcall operator_new(uint param_1)
 * body: 004bb91e-004bb93b
 * note: Library Function - Single Match  public: static void * __stdcall CNoTrackObject::operator new(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void * __stdcall CNoTrackObject::operator new(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * CNoTrackObject::operator_new(uint param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_004a3538();
  }
  return pvVar1;
}


