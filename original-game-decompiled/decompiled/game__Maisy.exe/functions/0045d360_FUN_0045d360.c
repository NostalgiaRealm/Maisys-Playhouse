
/* ==== FUN_0045d360 @ 0045d360 ==== 
 * signature: undefined __fastcall FUN_0045d360(int * param_1)
 * body: 0045d360-0045d40f
 */

void __fastcall FUN_0045d360(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  char local_204 [256];
  char local_104 [256];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x118))(1,1,1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x118))(local_204);
    if ((LPVOID)param_1[0x14] != (LPVOID)0x0) {
      FUN_0043f6d0((LPVOID)param_1[0x14]);
    }
    pcVar2 = FUN_0043f650(local_204);
    param_1[0x14] = (int)pcVar2;
    FUN_0043e0a0(0,local_204,(int)local_104);
    FUN_0043e070(local_104[0] + -0x41,local_104);
    if (*(LPVOID *)((int)param_1 + 0x4a) != (LPVOID)0x0) {
      FUN_0043f6d0(*(LPVOID *)((int)param_1 + 0x4a));
    }
    pcVar2 = FUN_0043f650(local_104);
    *(char **)((int)param_1 + 0x4a) = pcVar2;
  }
  return;
}


