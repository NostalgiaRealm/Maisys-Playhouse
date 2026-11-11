
/* ==== FUN_00479da0 @ 00479da0 ==== 
 * signature: undefined4 __stdcall FUN_00479da0(int param_1, undefined4 param_2)
 * body: 00479da0-00479eea
 */

undefined4 FUN_00479da0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_50 [5];
  undefined1 local_3c [8];
  undefined4 local_34;
  int *local_30;
  undefined1 local_28 [12];
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  local_10 = 0;
  piVar5 = *(int **)(param_1 + 0x32);
  cVar1 = (**(code **)(*piVar5 + 0x11c))(0,param_2,0,local_50,1);
  if (cVar1 != '\0') {
    local_10 = local_50[0];
  }
  cVar1 = (**(code **)(**(int **)(local_8 + 0x32) + 0x124))(0,local_10,local_3c,1,0);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(local_8 + 0x32);
    local_c = FUN_00479ef0(piVar5,local_10);
    iVar6 = 0;
    puVar2 = (undefined4 *)FUN_00430190((int)local_c);
    local_14 = *(int *)((int)local_c + 0x26);
    piVar5 = piVar3;
    local_18 = puVar2;
    if (0 < local_14) {
      do {
        cVar1 = (**(code **)(**(int **)(local_8 + 0x32) + 0x124))(1,*puVar2,local_3c,1,0);
        piVar5 = local_30;
        if (cVar1 != '\0') break;
        puVar2 = puVar2 + 1;
        iVar6 = iVar6 + 1;
        piVar5 = piVar3;
      } while (iVar6 < local_14);
    }
    iVar6 = iVar6 + -1;
    if (-1 < iVar6) {
      puVar2 = local_18 + iVar6;
      do {
        piVar3 = (int *)FUN_00466a90(*(int *)(local_8 + 0x26));
        uVar4 = (**(code **)(*piVar3 + 0x110))(1,local_28,0);
        (**(code **)(*piVar5 + 0x100))(*puVar2,1,uVar4);
        iVar6 = iVar6 + -1;
        puVar2 = puVar2 + -1;
        piVar5 = local_1c;
      } while (-1 < iVar6);
    }
    FUN_004301f0((int)local_c);
    (**(code **)(*local_c + 4))();
    piVar3 = (int *)FUN_00466a90(*(int *)(local_8 + 0x26));
    uVar4 = (**(code **)(*piVar3 + 0x110))(1,local_3c,0);
    (**(code **)(*piVar5 + 0x100))(local_10,0,uVar4);
  }
  return local_34;
}


