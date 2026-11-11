
/* ==== CallCatchBlock @ 004936d0 ==== 
 * signature: void * __cdecl CallCatchBlock(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, _s_FuncInfo * param_4, void * param_5, int param_6, ulong param_7)
 * body: 004936d0-00493775
 * note: Library Function - Single Match  void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 1998 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *pvVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_004cd910;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &local_14;
  __getptd();
  __getptd();
  p_Var1 = __getptd();
  p_Var1->ptlocinfo = (pthreadlocinfo)param_1;
  p_Var1 = __getptd();
  p_Var1->_ownlocale = (int)param_3;
  local_8 = 1;
  pvVar2 = _CallCatchBlock2(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_0049379d();
  *unaff_FS_OFFSET = local_14;
  return pvVar2;
}


