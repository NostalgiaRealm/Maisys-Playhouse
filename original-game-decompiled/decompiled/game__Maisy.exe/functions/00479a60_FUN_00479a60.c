
/* ==== FUN_00479a60 @ 00479a60 ==== 
 * signature: undefined4 __stdcall FUN_00479a60(undefined4 param_1, undefined4 param_2, char * param_3)
 * body: 00479a60-00479aad
 */

undefined4 FUN_00479a60(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *local_18;
  
  cVar2 = FUN_00479ac0();
  uVar3 = CONCAT31(extraout_var,cVar2);
  if (cVar2 != '\0') {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = local_18;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = local_18 + 1;
      cVar1 = *local_18;
      local_18 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_3 = param_3 + 1;
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),cVar2);
}


