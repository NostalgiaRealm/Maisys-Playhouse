
/* ==== _CallMemberFunction0 @ 0048e0c0 ==== 
 * signature: void __stdcall _CallMemberFunction0(void * param_1, void * param_2)
 * body: 0048e0c0-0048e0c6
 * note: Library Function - Single Match  void __stdcall _CallMemberFunction0(void *,void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Library: Visual Studio 1998 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0048e0c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}


