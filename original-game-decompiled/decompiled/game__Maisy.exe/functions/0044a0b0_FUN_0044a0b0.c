
/* ==== FUN_0044a0b0 @ 0044a0b0 ==== 
 * signature: int __fastcall FUN_0044a0b0(int * param_1)
 * body: 0044a0b0-0044a22d;0044a284-0044a28a
 */

int __fastcall FUN_0044a0b0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_140 [256];
  AFX_EXCEPTION_LINK local_40 [16];
  int *local_30;
  int local_2c;
  byte *local_24;
  int local_20;
  int *local_1c;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044a28b;
  *unaff_FS_OFFSET = &local_10;
  local_15 = '\x01';
  local_20 = *(int *)((int)param_1 + 0x152);
  local_14 = &stack0xfffffeb4;
  local_1c = param_1;
  if (local_20 == 0) {
    local_20 = 0;
    local_24 = (byte *)((int)param_1 + 0x6b);
    do {
      if ((*local_24 & 2) != 0) {
        local_20 = 0;
        goto LAB_0044a105;
      }
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_40);
      local_8 = 1;
      local_2c = *local_1c;
      cVar1 = (**(code **)(local_2c + 0x15c))(0xb);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(local_2c + 0xec))();
        if (cVar1 == '\0') {
          (**(code **)(local_2c + 0x1d0))(local_140,1,1);
          iVar2 = FUN_0048d066();
          if (iVar2 == 0) {
            FUN_0048d04c();
            FUN_0048ce44();
          }
        }
      }
      else {
        cVar1 = (**(code **)(local_2c + 0xec))();
        if (cVar1 != '\0') {
          local_30 = local_1c + 0x57;
          FUN_00486c10(*local_30);
          FUN_00486bd0((void *)*local_30,'\x01');
          FUN_00486c40(*local_30);
          iVar2 = FUN_0048d03f();
          if (iVar2 != 0) {
            FUN_004a3538();
          }
        }
      }
      local_15 = '\0';
      local_8 = 0xffffffff;
      FUN_0044a295();
    } while (local_15 != '\0');
  }
  else {
    *(undefined4 *)((int)param_1 + 0x152) = 0;
    local_14 = &stack0xfffffeb4;
  }
  (**(code **)(*local_1c + 0x1a4))();
LAB_0044a105:
  *unaff_FS_OFFSET = local_10;
  return local_20;
}


