
/* ==== FUN_004811a0 @ 004811a0 ==== 
 * signature: undefined __thiscall FUN_004811a0(void * this, int * param_1)
 * body: 004811a0-004811f5
 */

void __thiscall FUN_004811a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_58 [9];
  undefined2 local_34;
  int local_32;
  int local_2e;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  if ((iVar2 <= iVar1) && (iVar1 != iVar2 && -1 < iVar1 - iVar2)) {
    FUN_004142c0(local_58,0x6a9,0,0,0);
    local_32 = *param_1;
    local_2e = param_1[1];
    local_34 = 0x11;
    FUN_0046b770(this,(int)local_58);
  }
  return;
}


