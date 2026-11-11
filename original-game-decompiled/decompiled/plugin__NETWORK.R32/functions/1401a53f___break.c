
/* ==== __break @ 1401a53f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53f-1401a53f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


