
/* ==== FUN_004a6d4a @ 004a6d4a ==== 
 * signature: long __thiscall FUN_004a6d4a(void * this, CObject * param_1, tagMSG * param_2)
 * body: 004a6d4a-004a6dc4
 */

long __thiscall FUN_004a6d4a(void *this,CObject *param_1,tagMSG *param_2)

{
  UINT UVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  UVar1 = param_2->message;
  if ((UVar1 == 1) || (UVar1 == 0xf)) {
    lVar4 = CWinThread::ProcessWndProcException(this,(CException *)param_1,param_2);
  }
  else {
    uVar3 = 0xf108;
    lVar4 = 0;
    if (UVar1 == 0x111) {
      if (param_2->lParam == 0) {
        uVar3 = 0xf109;
      }
      lVar4 = 1;
    }
    iVar2 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CMemoryException_004dd268);
    if (iVar2 == 0) {
      iVar2 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CUserException_004dd940);
      if (iVar2 != 0) {
        return lVar4;
      }
      uVar5 = 0x10;
    }
    else {
      uVar5 = 0x1030;
    }
    (**(code **)(*(int *)param_1 + 0x18))(uVar5,uVar3);
  }
  return lVar4;
}


