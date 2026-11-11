
/* ==== FUN_00446180 @ 00446180 ==== 
 * signature: int __fastcall FUN_00446180(void * param_1)
 * body: 00446180-004461b3
 */

int __fastcall FUN_00446180(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0x14e);
  if (iVar3 == 0) {
    pvVar1 = FUN_0046da90(param_1,'\x01','\x01');
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_0046da90(param_1,'\x01','\x01');
      iVar3 = FUN_00449910(piVar2);
      return iVar3;
    }
    iVar3 = 0;
  }
  return iVar3;
}


