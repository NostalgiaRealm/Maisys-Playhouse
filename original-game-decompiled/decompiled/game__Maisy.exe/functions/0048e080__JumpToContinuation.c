
/* ==== _JumpToContinuation @ 0048e080 ==== 
 * signature: void __stdcall _JumpToContinuation(void * param_1, EHRegistrationNode * param_2)
 * body: 0048e080-0048e0ad
 * note: Library Function - Single Match  void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Library: Visual Studio 1998 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  undefined4 *unaff_FS_OFFSET;
  
  *unaff_FS_OFFSET = *(undefined4 *)*unaff_FS_OFFSET;
                    /* WARNING: Could not recover jumptable at 0x0048e0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


