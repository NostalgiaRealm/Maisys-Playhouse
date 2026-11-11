
/* ==== FUN_004196e0 @ 004196e0 ==== 
 * signature: undefined __fastcall FUN_004196e0(int * param_1)
 * body: 004196e0-0041977b
 */

void __fastcall FUN_004196e0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  DWORD DVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  thunk_FUN_00462a30(param_1);
  if (*(int *)((int)param_1 + 0x156) == 0x7fff) {
    if ((*(byte *)(param_1 + 0x57) & 1) == 0) {
      uVar3 = *(undefined4 *)((int)param_1 + 0x152);
    }
    else {
      uVar3 = *(undefined4 *)((int)param_1 + 0x14e);
    }
    *(undefined4 *)((int)param_1 + 0x156) = uVar3;
  }
  iVar1 = *param_1;
  piVar4 = (int *)(**(code **)(iVar1 + 0x3c0))();
  (**(code **)(*piVar4 + 0x268))(*(undefined4 *)((int)param_1 + 0x156));
  cVar2 = (**(code **)(iVar1 + 0x68))(5);
  if (cVar2 != '\0') {
    local_14 = 0;
    local_10 = 0;
    local_8 = 4;
    local_c = 0;
    (**(code **)(iVar1 + 0x44))(5,FUN_00419630,&local_14);
  }
  DVar5 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x166) = DVar5;
  *(undefined4 *)((int)param_1 + 0x16a) = 0;
  return;
}


