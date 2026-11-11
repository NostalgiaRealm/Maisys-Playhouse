
/* ==== FUN_14012430 @ 14012430 ==== 
 * signature: undefined4 __cdecl FUN_14012430(undefined4 * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 14012430-140124bb
 */

uint __cdecl FUN_14012430(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  iVar1 = param_1[1];
  puVar2 = param_1;
  puVar3 = param_1;
  while( true ) {
    if (iVar1 == 0) {
      return (uint)puVar3 & 0xffffff00;
    }
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&local_8);
    DAT_14028e48 = (undefined4 *)(*pcVar4)(local_8,&local_4,param_3,*puVar2);
    if (local_4 == 0) break;
    iVar5 = iVar5 + 1;
    iVar1 = puVar2[3];
    puVar2 = puVar2 + 2;
    puVar3 = DAT_14028e48;
  }
  *param_2 = param_1[iVar5 * 2 + 1];
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


