
/* ==== FUN_00478900 @ 00478900 ==== 
 * signature: undefined1 __thiscall FUN_00478900(void * this, char * param_1, undefined4 param_2, undefined4 param_3, char * param_4)
 * body: 00478900-004789b9
 */

undefined1 __thiscall
FUN_00478900(void *this,char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_5;
  
  local_5 = 0;
  iVar1 = *(int *)this;
  cVar2 = (**(code **)(iVar1 + 0x174))(param_2,param_3,param_1,0);
  if (cVar2 != '\0') {
    if (param_4 != (char *)0x0) {
      uVar4 = 0xffffffff;
      do {
        pcVar7 = param_4;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = param_4 + 1;
        cVar2 = *param_4;
        param_4 = pcVar7;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar9 = param_1;
      do {
        pcVar8 = pcVar9;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar2 != '\0');
      pcVar7 = pcVar7 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    if ((char)param_3 == '\0') {
      uVar3 = FUN_004785c0();
      return uVar3;
    }
    if ((short)param_2 != 1) {
      uVar3 = (**(code **)(iVar1 + 0x130))(param_1,param_2);
      return uVar3;
    }
    local_5 = 1;
  }
  return local_5;
}


