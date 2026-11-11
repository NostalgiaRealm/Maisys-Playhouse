
/* ==== FUN_00440380 @ 00440380 ==== 
 * signature: undefined1 __stdcall FUN_00440380(undefined4 param_1, int param_2, undefined4 param_3, void * param_4)
 * body: 00440380-00440486
 */

undefined1 FUN_00440380(undefined4 param_1,int param_2,undefined4 param_3,void *param_4)

{
  short *psVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  iVar2 = FUN_004404b0((int)param_4);
  local_5 = 0;
  if ((*(short *)((int)param_4 + 0xc2) != 0) && (param_2 == 1)) {
    local_20 = FUN_0048d402();
    local_1c = FUN_00441580(param_4);
    local_18 = 0;
    local_14 = 0;
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x12)) {
    if (*(int *)(iVar2 + 4) == param_2) {
      if (*(char *)(iVar2 + 0x10) == '\0') {
        local_5 = (**(code **)(iVar2 + 8))
                            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc));
      }
      else {
        psVar1 = *(short **)(iVar2 + 0xc);
        if (*psVar1 == 5) {
          pcVar3 = (code *)FUN_0048b580(*(int *)(psVar1 + 1),(int)psVar1[3],(int)psVar1[4],&local_10
                                       );
          DAT_004e34cc = (*pcVar3)(local_10,&local_20,&local_5);
        }
        else {
          pcVar3 = (code *)FUN_0048b580(*(int *)(psVar1 + 1),(int)psVar1[3],(int)psVar1[4],&local_c)
          ;
          DAT_004e34cc = (*pcVar3)(local_c,param_3,&local_5);
        }
      }
    }
  }
  return local_5;
}


