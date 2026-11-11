
/* ==== FUN_0047db70 @ 0047db70 ==== 
 * signature: int __fastcall FUN_0047db70(undefined4 * param_1)
 * body: 0047db70-0047dba8
 */

int __fastcall FUN_0047db70(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[2];
    iVar2 = *piVar1;
    param_1[1] = iVar2;
    if (iVar2 == 0) {
      *param_1 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    FUN_004a602d(piVar1);
    param_1[2] = param_1[2] + -1;
  }
  return iVar3;
}


