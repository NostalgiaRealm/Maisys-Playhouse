
/* ==== FUN_00473330 @ 00473330 ==== 
 * signature: undefined __thiscall FUN_00473330(void * this, int * param_1)
 * body: 00473330-004733af
 */

void __thiscall FUN_00473330(void *this,int *param_1)

{
  FUN_0046c1c0(this,param_1);
  if ((param_1 != (int *)0x0) && ((*(byte *)((int)param_1 + 0x1e) & 8) != 0)) {
    *(undefined4 *)((int)this + 0xa2) = *(undefined4 *)((int)param_1 + 0xa2);
    *(undefined2 *)((int)this + 0x92) = *(undefined2 *)((int)param_1 + 0x92);
    *(short *)((int)this + 0x94) = (short)param_1[0x25];
    *(short *)((int)this + 0x9c) = (short)param_1[0x27];
    *(undefined2 *)((int)this + 0x9e) = *(undefined2 *)((int)param_1 + 0x9e);
    *(short *)((int)this + 0xa0) = (short)param_1[0x28];
    *(undefined2 *)((int)this + 0xaa) = *(undefined2 *)((int)param_1 + 0xaa);
  }
  return;
}


