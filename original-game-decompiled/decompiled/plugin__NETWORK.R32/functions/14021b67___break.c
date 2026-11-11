
/* ==== __break @ 14021b67 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b67-14021b67
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


