
/* ==== FUN_0048c7d0 @ 0048c7d0 ==== 
 * signature: undefined4 __cdecl FUN_0048c7d0(int param_1, short * param_2)
 * body: 0048c7d0-0048c8d0
 */

undefined4 __cdecl FUN_0048c7d0(int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_408 [255];
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar5 = 0xff;
  if (((param_1 != 0) && (param_2 != (short *)0x0)) && (*param_2 == 0x6d)) {
    piVar1 = (int *)FUN_0048c050(param_1);
    if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x1e) & 1) != 0)) {
      piVar3 = &local_c;
      while( true ) {
        if (piVar1 == (int *)0x0) {
          return 0x10000;
        }
        if (*(short *)((int)piVar1 + 0x22) == 0x43) break;
        piVar4 = piVar3 + -1;
        iVar5 = iVar5 + -1;
        *piVar3 = piVar1[3];
        piVar1 = (int *)(**(code **)(*piVar1 + 0x16c))();
        piVar3 = piVar4;
        if (piVar4 == local_408) {
          return 0x10000;
        }
      }
      if (0xff - iVar5 <= (int)param_2[1]) {
        if (iVar5 < 0xff) {
          piVar1 = local_408 + iVar5;
          iVar2 = 0;
          local_8 = 0xff - iVar5;
          do {
            iVar2 = iVar2 + 4;
            piVar3 = piVar1 + 1;
            piVar1 = piVar1 + 1;
            *(int *)(*(int *)(param_2 + 2) + -4 + iVar2) = *piVar3;
          } while (piVar1 < &local_c);
        }
        param_2[1] = (short)local_8;
        return 0;
      }
      return 0x10000;
    }
    return 0x10000;
  }
  return 0x10000;
}


