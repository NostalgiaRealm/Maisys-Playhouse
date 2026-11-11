
/* ==== FUN_14015050 @ 14015050 ==== 
 * signature: undefined4 __cdecl FUN_14015050(undefined4 * param_1, char * param_2, int param_3, int param_4)
 * body: 14015050-140150b3
 */

uint __cdecl FUN_14015050(undefined4 *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return in_EAX & 0xffffff00;
    }
    in_EAX = FUN_14015030(param_2[iVar2],param_3);
    if ((char)in_EAX != '\0') break;
    if (param_4 == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      iVar2 = iVar2 + -1;
    }
    cVar1 = param_2[iVar2];
  }
  if (param_4 == 0) {
    *param_1 = param_2 + iVar2;
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  *param_1 = param_2 + iVar2 + 1;
  return CONCAT31((int3)((uint)(param_2 + iVar2 + 1) >> 8),1);
}


