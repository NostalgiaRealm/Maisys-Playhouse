
/* ==== FUN_0044c130 @ 0044c130 ==== 
 * signature: undefined __fastcall FUN_0044c130(int * param_1)
 * body: 0044c130-0044c18c
 */

void __fastcall FUN_0044c130(int *param_1)

{
  char cVar1;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if ((*(int *)((int)param_1 + 0x7e) != 0) && (param_1[0x21] == 0)) {
    cVar1 = FUN_0044bd00(param_1,0x100);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x298))(&local_c);
      MoveWindow(*(HWND *)((int)param_1 + 0x7e),(int)local_c,(int)local_a,
                 (int)local_8 - (int)local_c,(int)local_6 - (int)local_a,1);
    }
  }
  return;
}


