
/* ==== __break @ 14021b66 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b66-14021b66
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


