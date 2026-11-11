
/* ==== FUN_00493120 @ 00493120 ==== 
 * signature: undefined __cdecl FUN_00493120(pthreadlocinfo param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, char param_6, int param_7, EHRegistrationNode * param_8)
 * body: 00493120-004933bf
 */

void __cdecl
FUN_00493120(pthreadlocinfo param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,char param_6,int param_7,EHRegistrationNode *param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  _ptiddata p_Var6;
  undefined3 extraout_var;
  int iVar7;
  _s_HandlerType *p_Var8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  _s_TryBlockMapEntry *local_18;
  uint local_c;
  uint local_8;
  uint *local_4;
  
  iVar2 = *(int *)(param_2 + 8);
  if ((iVar2 < -1) || (*(int *)(param_5 + 4) <= iVar2)) {
    _inconsistency();
  }
  if ((((param_1->refcount == -0x1f928c9d) && (param_1->lc_category[0].locale == (char *)0x3)) &&
      (param_1->lc_category[0].wlocale == (wchar_t *)0x19930520)) &&
     (param_1->lc_category[0].wrefcount == (int *)0x0)) {
    p_Var6 = __getptd();
    if (p_Var6->ptlocinfo == (pthreadlocinfo)0x0) {
      return;
    }
    p_Var6 = __getptd();
    param_1 = p_Var6->ptlocinfo;
    p_Var6 = __getptd();
    param_3 = (_CONTEXT *)p_Var6->_ownlocale;
    bVar5 = FID_conflict__ValidateRead(param_1,1);
    if (CONCAT31(extraout_var,bVar5) == 0) {
      _inconsistency();
    }
    if (((param_1->refcount == -0x1f928c9d) && (param_1->lc_category[0].locale == (char *)0x3)) &&
       ((param_1->lc_category[0].wlocale == (wchar_t *)0x19930520 &&
        (param_1->lc_category[0].wrefcount == (int *)0x0)))) {
      _inconsistency();
    }
  }
  if (((param_1->refcount == -0x1f928c9d) && (param_1->lc_category[0].locale == (char *)0x3)) &&
     (param_1->lc_category[0].wlocale == (wchar_t *)0x19930520)) {
    local_18 = GetRangeOfTrysToCheck(param_5,param_7,iVar2,&local_c,&local_8);
    if (local_c < local_8) {
      do {
        if ((*(int *)local_18 <= iVar2) && (iVar2 <= *(int *)(local_18 + 4))) {
          p_Var8 = *(_s_HandlerType **)(local_18 + 0x10);
          for (iVar3 = *(int *)(local_18 + 0xc); iVar3 != 0; iVar3 = iVar3 + -1) {
            piVar9 = (int *)param_1->lc_category[0].wrefcount[3];
            for (iVar7 = *piVar9; iVar7 != 0; iVar7 = iVar7 + -1) {
              piVar9 = piVar9 + 1;
              iVar11 = *(int *)(p_Var8 + 4);
              local_4 = (uint *)param_1->lc_category[0].wrefcount;
              pbVar4 = (byte *)*piVar9;
              if ((iVar11 == 0) || (*(char *)(iVar11 + 8) == '\0')) {
LAB_004932e1:
                bVar5 = true;
              }
              else {
                if (*(int *)(pbVar4 + 4) == iVar11) {
LAB_004932b9:
                  if (((((*pbVar4 & 2) == 0) || (((byte)*p_Var8 & 8) != 0)) &&
                      (((*local_4 & 1) == 0 || (((byte)*p_Var8 & 1) != 0)))) &&
                     (((*local_4 & 2) == 0 || (((byte)*p_Var8 & 2) != 0)))) goto LAB_004932e1;
                }
                else {
                  pbVar10 = (byte *)(iVar11 + 8);
                  pbVar12 = (byte *)(*(int *)(pbVar4 + 4) + 8);
                  do {
                    bVar1 = *pbVar10;
                    bVar5 = bVar1 < *pbVar12;
                    if (bVar1 != *pbVar12) {
LAB_004932b0:
                      iVar11 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
                      goto LAB_004932b5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar10[1];
                    bVar5 = bVar1 < pbVar12[1];
                    if (bVar1 != pbVar12[1]) goto LAB_004932b0;
                    pbVar10 = pbVar10 + 2;
                    pbVar12 = pbVar12 + 2;
                  } while (bVar1 != 0);
                  iVar11 = 0;
LAB_004932b5:
                  if (iVar11 == 0) goto LAB_004932b9;
                }
                bVar5 = false;
              }
              if (bVar5) {
                CatchIt((EHExceptionRecord *)param_1,param_2,param_3,param_4,param_5,p_Var8,
                        (_s_CatchableType *)*piVar9,local_18,param_7,param_8);
                goto LAB_0049333f;
              }
            }
            p_Var8 = p_Var8 + 0x10;
          }
        }
LAB_0049333f:
        local_18 = local_18 + 0x14;
        local_c = local_c + 1;
      } while (local_c < local_8);
    }
    if (param_6 != '\0') {
      DestructExceptionObject((EHExceptionRecord *)param_1,'\x01');
      return;
    }
  }
  else {
    if (param_6 == '\0') {
      FindHandlerForForeignException
                ((EHExceptionRecord *)param_1,param_2,param_3,param_4,param_5,iVar2,param_7,param_8)
      ;
      return;
    }
    terminate();
  }
  return;
}


