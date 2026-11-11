
/* ==== __break @ 0040eefa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040eefa-0040eefa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


