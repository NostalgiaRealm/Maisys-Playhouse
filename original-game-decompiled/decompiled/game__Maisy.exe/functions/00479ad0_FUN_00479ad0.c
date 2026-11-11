
/* ==== FUN_00479ad0 @ 00479ad0 ==== 
 * signature: char __thiscall FUN_00479ad0(void * this, undefined4 param_1, int * param_2, undefined4 * param_3, undefined1 * param_4)
 * body: 00479ad0-00479b49
 */

char __thiscall
FUN_00479ad0(void *this,undefined4 param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 local_18 [20];
  
  cVar2 = '\0';
  iVar3 = -1;
  if (param_4 == (undefined1 *)0x0) {
    param_4 = local_18;
  }
  if (*(int **)((int)this + 0x32) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x32) + 0x124))(0,param_1,param_4,1,0);
    if (cVar1 != '\0') {
      cVar2 = '\x01';
      iVar3 = 900;
    }
  }
  if (cVar2 != '\0') {
    if (iVar3 < 0) {
      *param_2 = *(int *)(param_4 + 8);
      *param_3 = *(undefined4 *)(param_4 + 0xc);
      return cVar2;
    }
    *param_2 = iVar3;
    *param_3 = *(undefined4 *)(param_4 + 8);
  }
  return cVar2;
}


