
/* ==== FID_conflict:_CallMemberFunction1 @ 12028850 ==== 
 * signature: undefined __stdcall FID_conflict:_CallMemberFunction1(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * body: 12028850-12028856
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
                    /* WARNING: Could not recover jumptable at 0x12028855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


