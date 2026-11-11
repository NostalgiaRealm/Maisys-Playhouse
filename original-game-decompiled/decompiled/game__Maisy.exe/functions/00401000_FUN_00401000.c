
/* ==== FUN_00401000 @ 00401000 ==== 
 * signature: int * __cdecl FUN_00401000(short param_1, short * param_2, short * param_3, uint param_4, char param_5)
 * body: 00401000-00401139
 */

int * __cdecl FUN_00401000(short param_1,short *param_2,short *param_3,uint param_4,char param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 *unaff_FS_OFFSET;
  char local_40 [20];
  undefined1 local_2c [4];
  uint local_28;
  undefined1 local_24 [4];
  char *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040113a;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 == 2) {
    bVar4 = 0;
    local_18 = (int *)0x0;
    piVar2 = (int *)FUN_00455ee0(param_2,(int *)&local_18,(int *)0x0);
    if (piVar2 == (int *)0x0) {
      FUN_00458440(local_24,param_2 + 0x16);
      local_8 = 0;
      if (local_1c == (int *)0x0) {
        if (local_18 != (int *)0x0) {
          local_14 = (int *)0x0;
          uVar3 = (**(code **)(*local_18 + 0x94))(&local_14,0);
          cVar1 = (**(code **)(*DAT_004da38c + 0x100))(uVar3);
          if (cVar1 != '\0') {
            FUN_004374f0(local_20,local_40);
            FUN_00437550((int)local_40);
            cVar1 = (**(code **)(*local_14 + 0x100))(local_40,local_2c,(char)DAT_004da38c[0x18]);
            if (cVar1 != '\0') {
              if (param_5 == '\0') {
                bVar4 = (param_4 & local_28) == 0;
              }
              else {
                bVar4 = 1 - ((param_4 & local_28) == 0);
              }
            }
          }
        }
        local_14 = (int *)FUN_00454c50(param_3,bVar4);
        local_8 = 0xffffffff;
        FUN_00401144();
        piVar2 = local_14;
      }
      else {
        local_8 = 0xffffffff;
        local_14 = local_1c;
        FUN_00401144();
        piVar2 = local_14;
      }
    }
  }
  else {
    piVar2 = (int *)0x10000;
  }
  *unaff_FS_OFFSET = local_10;
  return piVar2;
}


