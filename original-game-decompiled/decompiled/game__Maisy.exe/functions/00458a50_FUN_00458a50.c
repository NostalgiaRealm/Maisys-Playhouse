
/* ==== FUN_00458a50 @ 00458a50 ==== 
 * signature: undefined __fastcall FUN_00458a50(undefined4 * param_1)
 * body: 00458a50-00458bf5
 */

void __fastcall FUN_00458a50(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00458bf6;
  *param_1 = &PTR_FUN_004c8868;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  FUN_0045b5a0((int)param_1);
  FUN_0046e8d0(DAT_004dc564,(int)param_1);
  FUN_0045a150((int)param_1);
  if (*(int **)((int)param_1 + 0x66) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x66) + 8))(1,0);
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  FUN_00458f20((int)param_1);
  if (*(undefined4 **)((int)param_1 + 0xbe) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xbe))(1);
  }
  *(undefined4 *)((int)param_1 + 0xbe) = 0;
  if (*(int **)((int)param_1 + 0x82) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x82) + 4))();
    *(undefined4 *)((int)param_1 + 0x82) = 0;
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
    param_1[0x12] = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x7e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x7e))(1);
    *(undefined4 *)((int)param_1 + 0x7e) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x72) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x72))(1);
    *(undefined4 *)((int)param_1 + 0x72) = 0;
  }
  if (*(int *)((int)param_1 + 0x76) != 0) {
    FUN_0045a1e0((int)param_1);
    if (*(undefined4 **)((int)param_1 + 0x76) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x76))(1);
    }
    *(undefined4 *)((int)param_1 + 0x76) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0xa2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xa2))(1);
    *(undefined4 *)((int)param_1 + 0xa2) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x6e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6e))(1);
    *(undefined4 *)((int)param_1 + 0x6e) = 0;
  }
  if (param_1 == DAT_004da378) {
    FUN_00429720(0);
  }
  if (param_1 == DAT_004da374) {
    DAT_004da374 = (undefined4 *)0x0;
  }
  FUN_0047dc10();
  local_8 = 0xffffffff;
  FUN_00458c00();
  *unaff_FS_OFFSET = local_10;
  return;
}


