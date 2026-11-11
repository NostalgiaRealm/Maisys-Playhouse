
/* ==== FindHandlerForForeignException @ 12029900 ==== 
 * signature: void __cdecl FindHandlerForForeignException(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, int param_6, int param_7, EHRegistrationNode * param_8)
 * body: 12029900-120299d6
 * note: Library Function - Single Match  void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 1998 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  _ptiddata p_Var1;
  int iVar2;
  _s_TryBlockMapEntry *p_Var3;
  int iVar4;
  uint local_8;
  uint local_4;
  
  p_Var1 = __getptd();
  if (((p_Var1->ptmbcinfo == (pthreadmbcinfo)0x0) ||
      (iVar2 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
      iVar2 == 0)) &&
     (p_Var3 = GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,&local_4), local_8 < local_4))
  {
    do {
      if ((*(int *)p_Var3 <= param_6) && (param_6 <= *(int *)(p_Var3 + 4))) {
        iVar4 = *(int *)(p_Var3 + 0xc) * 0x10 + *(int *)(p_Var3 + 0x10);
        iVar2 = *(int *)(iVar4 + -0xc);
        if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
          CatchIt(param_1,param_2,param_3,param_4,param_5,(_s_HandlerType *)(iVar4 + -0x10),
                  (_s_CatchableType *)0x0,p_Var3,param_7,param_8);
        }
      }
      p_Var3 = p_Var3 + 0x14;
      local_8 = local_8 + 1;
    } while (local_8 < local_4);
  }
  return;
}


