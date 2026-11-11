
/* ==== FUN_0045e4d0 @ 0045e4d0 ==== 
 * signature: undefined4 __thiscall FUN_0045e4d0(void * this, int param_1, short param_2, short param_3, short param_4, undefined2 * param_5)
 * body: 0045e4d0-0045e541
 */

undefined4 __thiscall
FUN_0045e4d0(void *this,int param_1,short param_2,short param_3,short param_4,undefined2 *param_5)

{
  char cVar1;
  int iVar2;
  undefined1 local_44 [26];
  ushort local_2a;
  uint local_c;
  int local_8;
  
  local_8 = (int)param_2;
  iVar2 = (int)param_3;
  if (local_8 <= iVar2) {
    local_c = (uint)param_4;
    do {
      FUN_00430370(*(void **)((int)this + 0x2a),iVar2,local_44);
      if (local_2a == local_c) {
        cVar1 = FUN_00437470(param_1,(int)local_44);
        if (cVar1 != '\0') {
          *param_5 = (short)iVar2;
          return 0;
        }
      }
      iVar2 = iVar2 + -1;
    } while (local_8 <= iVar2);
  }
  return 0x10000;
}


