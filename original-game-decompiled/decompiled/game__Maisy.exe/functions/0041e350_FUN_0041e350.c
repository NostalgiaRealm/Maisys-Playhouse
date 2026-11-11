
/* ==== FUN_0041e350 @ 0041e350 ==== 
 * signature: char __thiscall FUN_0041e350(void * this, int param_1, undefined4 param_2, undefined4 param_3, short * param_4, undefined4 param_5)
 * body: 0041e350-0041e3d7
 */

char __thiscall
FUN_0041e350(void *this,int param_1,undefined4 param_2,undefined4 param_3,short *param_4,
            undefined4 param_5)

{
  char *pcVar1;
  
  (**(code **)(*(int *)this + 0x114))();
  pcVar1 = (char *)(param_1 + 2);
  if ((*pcVar1 != '\0') &&
     ((((*(short *)(param_1 + 4) != *param_4 || (*(short *)(param_1 + 8) != param_4[2])) ||
       (*(short *)(param_1 + 6) != param_4[1])) || (*(short *)(param_1 + 10) != param_4[3])))) {
    if (*(HGLOBAL *)(param_1 + 0x1c) != (HGLOBAL)0x0) {
      FUN_0043f7a0(*(HGLOBAL *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *pcVar1 = '\0';
  }
  if (*pcVar1 == '\0') {
    (**(code **)(*(int *)this + 0x210))(param_3,param_4,param_2,param_5,param_1);
  }
  return *pcVar1;
}


