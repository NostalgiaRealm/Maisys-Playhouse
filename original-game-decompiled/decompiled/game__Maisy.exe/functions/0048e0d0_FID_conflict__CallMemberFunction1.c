
/* ==== FID_conflict:_CallMemberFunction1 @ 0048e0d0 ==== 
 * signature: undefined __stdcall FID_conflict:_CallMemberFunction1(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * body: 0048e0d0-0048e0d6
 * note: Library Function - Multiple Matches With Different Base Names  void __stdcall _CallMemberFunction1(void *,void *,void *)  void __stdcall _CallMemberFunction2(void *,void *,void *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Library: Visual Studio 1998 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0048e0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


