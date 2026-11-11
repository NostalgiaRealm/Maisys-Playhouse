
/* ==== ___InternalCxxFrameHandler @ 120295a0 ==== 
 * signature: undefined4 __cdecl ___InternalCxxFrameHandler(pthreadlocinfo param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, int param_6, EHRegistrationNode * param_7, undefined4 param_8)
 * body: 120295a0-1202965b
 * note: Library Function - Single Match  ___InternalCxxFrameHandler  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (pthreadlocinfo param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)param_5 != 0x19930520) {
    _inconsistency();
  }
  if ((param_1->lc_codepage & 0x66) != 0) {
    if ((*(int *)(param_5 + 4) != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
    return 1;
  }
  if (*(int *)(param_5 + 0xc) != 0) {
    if (((param_1->refcount == -0x1f928c9d) &&
        ((wchar_t *)0x19930520 < param_1->lc_category[0].wlocale)) &&
       (pcVar1 = (code *)param_1->lc_category[0].wrefcount[2], pcVar1 != (code *)0x0)) {
      uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
    FUN_12029660(param_1,param_2,param_3,param_4,param_5,(char)param_8,param_6,param_7);
  }
  return 1;
}


