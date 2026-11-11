
/* ==== __break @ 0049483f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049483f-0049483f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


