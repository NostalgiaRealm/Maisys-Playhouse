
/* ==== FUN_004a90c8 @ 004a90c8 ==== 
 * signature: undefined __thiscall FUN_004a90c8(void * this, char * param_1, char * param_2, uint param_3, int * param_4, int param_5, HMENU__ * param_6, void * param_7)
 * body: 004a90c8-004a9116
 */

void __thiscall
FUN_004a90c8(void *this,char *param_1,char *param_2,uint param_3,int *param_4,int param_5,
            HMENU__ *param_6,void *param_7)

{
  HWND__ *pHVar1;
  
  if (param_5 == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(param_5 + 0x1c);
  }
  CWnd::CreateEx(this,0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],
                 param_4[2] - *param_4,param_4[3] - param_4[1],pHVar1,param_6,param_7);
  return;
}


