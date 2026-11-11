
/* ==== FUN_0045b990 @ 0045b990 ==== 
 * signature: bool __thiscall FUN_0045b990(void * this, int * param_1)
 * body: 0045b990-0045ba12
 */

bool __thiscall FUN_0045b990(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool local_5;
  
  if ((param_1[1] < *param_1) || (param_1[1] == *param_1)) {
    return false;
  }
  iVar4 = 0;
  iVar2 = *(int *)this;
  if ((iVar2 == 0) || (iVar1 = *(int *)(iVar2 + 0x26), iVar1 == 0)) {
    return false;
  }
  iVar2 = FUN_00430190(iVar2);
  local_5 = false;
  if (0 < iVar1) {
    piVar3 = (int *)(iVar2 + 4);
    do {
      if (param_1[1] <= *piVar3) {
        local_5 = *(int *)(iVar2 + iVar4 * 8) <= *param_1;
        break;
      }
      piVar3 = piVar3 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_004301f0(*(int *)this);
  return local_5;
}


